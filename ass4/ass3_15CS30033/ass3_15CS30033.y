%{
#include "ass4_15CS30033_translator.h"
extern int yylex();
void yyerror(const char *);
%}

%union {
    int intVal;
    double doubleVal;
    char charVal;
    char* charConstVal;
    int instr;
    string* strVal;
    type_identifier id;
    type_declaration dec;    
    type_expression exp;   
    symbolEntry* loc;
    list* nextList;
    vector<type_expression*> *args;
}

%start translation_unit
%token UNSIGNED INT BREAK CASE FLOAT FOR SIGNED BOOL CONTINUE DO DOUBLE
%token LONG ELSE RETURN VOID CHAR SHORT WHILE GOTO DEFAULT SWITCH IF MATRIX

%token PLUS MINUS STAR DIVIDE GT LT AND CAP OR DOT SEMI_COLON APOS
%token LSB RSB LCB RCB LP RP COMMA EQUAL QUESTION NOT COLON PERCENT
%token STAR_EQUAL DIVIDE_EQUAL PERCENT_EQUAL MINUS_EQUAL LT_LT_EQUAL
%token GT_GT_EQUAL AND_EQUAL CAP_EQUAL OR_EQUAL OR_OR AND_AND
%token EQUAL_EQUAL NOT_EQUAL LT_EQUAL GT_EQUAL LT_LT GT_GT
%token PLUS_PLUS MINUS_MINUS MINUS_GT DOT_APOS PLUS_EQUAL

/* [TODO]
   Character constant is not a single character, and needs to be handled seperately. Hence the need to change the lexer
   and parser accordingly. */
%token CONSTANT
%token IDENTIFIER
%token STRING_LITERAL

%%

/* descriptions of expected inputs     corresponding actions (in C) */

/*
line		: expression 					{printf("line : expression\n");}
		| declaration 					{printf("line : declaration\n");}
		| statement 					{printf("line : statement\n");}
		| translation_unit 				{printf("line : translation_unit\n");};
*/

primary_expression	: IDENTIFIER
			  { 
			      // Get location of the identifier
			      if(!globalSymTab->isPresent(*($1.strVal))) 
				  $$.loc = currentSymTab->lookUp(*($1.strVal));
			      else $$.loc = globalSymTab->lookUp(*($1.strVal));

			      // Initialise parameters of type_expression
			      $$.base = $$.loc;
			      $$.t = $$.loc->t;
			      $$.trueList = NULL;
			      $$.falseList = NULL;
			      $$.strLabel = -1;
			  }
			| INT_CONSTANT
			  {
			      $$.loc = currentSymTab->genTemp(new type(t_INT));
			      $$.t = $$.loc->t;
			      $$.trueList = NULL;
			      $$.falseList = NULL;
			      currentSymTab->update($$.loc, $1);
			      quad.emit(quadEntry(OP_COPY, $$.loc->name, $1));
			      $$.strLabel = -1;
			  }
			| FLOAT_CONSTANT
			  {
			      $$.loc = currentSymTab->genTemp(new type(t_DOUBLE));
			      $$.t = $$.loc->t;
			      $$.trueList = NULL;
			      $$.falseList = NULL;
			      currentSymTab->update($$.loc, $1);
			      quad.emit(quadEntry(OP_COPY, $$.loc->name, $1));
			      $$.strLabel = -1;
			  }
			| CHAR_CONSTANT
			  {
			      $$.loc = currentSymTab->genTemp(new type(t_CHAR));
			      $$.t = $$.loc->t;
			      $$.trueList = NULL;
			      $$.falseList = NULL;
			      currentSymTab->update($$.loc, int($1));
			      quad.emit(quadEntry(OP_COPY, $$.loc->name, int($1)));
			      $$.strLabel = -1;
			  }
			| STRING_LITERAL
			  {
			      //[TODO] This is not supported. Also support Matrix types
			      $$.t = new type(t_PTR);
			      $$.type->next = new type_t(t_CHAR);
			      $$.isString = true;
			      if(uniqueLabels.count(*($1))) {
				$$.strLabel = uniqueLabels[*($1)];
			      } else {
				$$.strLabel = strLabels.size();
				uniqueLabels[*($1)] = strLabels.size();
				strLabels.push_back(*($1));
			      }
			  }
			| LP expression RP
			  {
			      $$ = $2;
			  };
postfix_expression	: 
			  primary_expression
			  {
			      $$ = $1;
			      $$.isArray = false;
			  }
			| postfix_expression LSB expression RSB
			  {   
			      $$ = $1;
			      char temp[10];
    			      sprintf(temp, "%d", $1.t->next->getSize());
			      if(!($$.isArray)) {
				  // First time declaring, e.g. int ar[10];
				  $$.isArray = true;
				  $$.loc = currentSymTab->genTemp(new type(t_INT));
				  quad.emit(quadEntry(OP_MULT, $$.loc->name, $3.loc->name, temp));
			      } else {
				  // From existing array
				  if($1.t->next == NULL) {
				      yyerror("error: postfix_expression[expression] requires array, pointer, or vector in postfix_expression");
				      exit(1);
				  }
				  symEntry *tmp = currentSymTab->genTemp(new type(t_INT));
				  quad.emit(quadEntry(OP_MULT, tmp->name, $3.loc->name, temp));
				  quad.emit(quadEntry(OP_PLUS, $$.loc->name, $$.loc->name, tmp->name));
			      }
			      $$.t = $1.t->next;
			  }
			| postfix_expression LP argument_expression_list_opt RP
			  {   // Functions 
			      $$ = $1;
			      if($1.loc->nestedTable == NULL || !checkParams($1, $3)) {
				  char err[100];
				  sprintf(err, "Error in calling %s. Parameters type do not match.\n", $1.loc->name.c_str());
				  yyerror(err);
				  exit(1);
			      } else {
				 for(int i = 0; i < $3->size(); i++) {
				      if((*$3)[i]->isString) {
					char temp[10];
					sprintf(temp, "%d", (*$3)[i]->strLabel);
				        string label = ".LC" + temp;
				        quad.emit(quadEntry(OP_PARAM, label));
				      } else {
				        quad.emit(quadEntry(OP_PARAM, (*$3)[i]->loc->name));
				      }
				  }
				  char buf[10];
				  sprintf(buf, "%d", $3->size());
				  $$.loc = currentSymTab->genTemp($1.loc->nestedTable->entries[0]->type);
				  $$.t = $$.loc->t;
				  $$.trueList = NULL;
				  $$.falseList = NULL;
				  $$.isArray = false;
				  quad.emit(quadEntry(OP_CALL, $$.loc->name, $1.loc->name, buf));
			      }
			  }
			| postfix_expression DOT identifier
			  {
			      // [TODO]
			  }
			| postfix_expression MINUS_GT identifier
			  {
			      // [TODO]
			  }
			| postfix_expression PLUS_PLUS
			  {
			      $$ = $1;
			      $$.loc = currentSymTab->genTemp($1.t);
			      $$.t = $$.loc->t;

			      if($1.isArray) {
				  quad.emit(quadEntry(OP_R_INDEX, $$.loc->name, $1.base->name, $1.loc->name));
				  symEntry *tmp = currentSymTab->genTemp($1.type);
				  quad.emit(quadEntry(OP_PLUS, tmp->name, $$.loc->name, "1"));
				  quad.emit(quadEntry(OP_L_INDEX, $1.base->name, $1.loc->name, tmp->name));
			      } else {
				  quad.emit(quadEntry(OP_COPY, $$.loc->name, $1.loc->name));
				  quad.emit(quadEntry(OP_PLUS, $1.loc->name, $1.loc->name, "1"));
			      }
			      $$.isArray = false;
			  }
			| postfix_expression MINUS_MINUS
			  {
			      $$ = $1;
			      $$.loc = currentSymTab->genTemp($1.t);
			      $$.t = $$.loc->t;

			      if($1.isArray) {
				  quad.emit(quadEntry(OP_R_INDEX, $$.loc->name, $1.base->name, $1.loc->name));
				  symEntry *tmp = currentSymTab->genTemp($1.type);
				  quad.emit(quadEntry(OP_MINUS, tmp->name, $$.loc->name, "1"));
				  quad.emit(quadEntry(OP_L_INDEX, $1.base->name, $1.loc->name, tmp->name));
			      } else {
				  quad.emit(quadEntry(OP_COPY, $$.loc->name, $1.loc->name));
				  quad.emit(quadEntry(OP_MINUS, $1.loc->name, $1.loc->name, "1"));
			      }
			      $$.isArray = false;
			  }
			| postfix_expression DOT_APOS
			  {
			      // [TODO]
			  };
argument_expression_list_opt:
			  {
			      $$ = new vector <type_expression*>();
			  }
			| argument_expression_list
			  {
			      $$ = $1;
			  };
argument_expression_list:
			  assignment_expression
			  {   
			      $$ = new vector <type_expression*>();
			      $$->push_back(new type_expression($1));
			  }
			| argument_expression_list COMMA assignment_expression
			  {
			      $$ = $1;
			      $$->push_back(new type_expression($3));
			  };
unary_expression:
			  postfix_expression
			  {
			      $$ = $1;
			  }
			| PLUS_PLUS unary_expression
			  {
			      $$ = $2;
			      $$.loc = currentSymTab->genTemp($2.t);
			      $$.t = $$.loc->t;
			      if($2.isArray) {
				  symEntry *tmp = currentSymTab->genTemp($2.t);
				  quad.emit(quadEntry(OP_R_INDEX, $$.loc->name, $2.base->name, $2.loc->name));
				  quad.emit(quadEntry(OP_PLUS, tmp->name, $$.loc->name, "1"));
				  quad.emit(quadEntry(OP_L_INDEX, $2.base->name, $2.loc->name, $$.loc->name));
				  $$.loc = tmp;
			      } else {
				  quad.emit(quadEntry(OP_PLUS, $2.loc->name, $2.loc->name, "1"));
				  quad.emit(quadEntry(OP_COPY, $$.loc->name, $2.loc->name));
			      }
			      $$.isArray = false;
			  }
			| MINUS_MINUS unary_expression
			  {
			      $$ = $2;
			      $$.loc = currentSymTab->genTemp($2.t);
			      $$.t = $$.loc->t;
			      if($2.isArray) {
				  symEntry *tmp = currentSymTab->genTemp($2.t);
				  quad.emit(quadEntry(OP_R_INDEX, $$.loc->name, $2.base->name, $2.loc->name));
				  quad.emit(quadEntry(OP_MINUS, tmp->name, $$.loc->name, "1"));
				  quad.emit(quadEntry(OP_L_INDEX, $2.base->name, $2.loc->name, tmp->name));
				  $$.loc = tmp;
			      } else {
				  quad.emit(quadEntry(OP_MINUS, $2.loc->name, $2.loc->name, "1"));
				  quad.emit(quadEntry(OP_COPY, $$.loc->name, $2.loc->name));
			      }
			      $$.isArray = false;
			  }
			| unary_operator cast_expression
			  {
			      // [TODO]
			      $$.trueList = NULL;
			      $$.falseList = NULL;

			      switch($1) {
				  case '&':
				    type *ptr = new type(t_PTR);
				    ptr->next = $2.t;
				    $$.loc = currentSymTab->genTemp(ptr);
				    $$.t = $$.loc->t;
				    if(!$2.isArray)
				      quad.emit(quadEntry(OP_ADDR, $$.loc->name, $2.loc->name));
				    else 
				      quad.emit(quadEntry(OP_PLUS, $$.loc->name, $2.base->name, $2.loc->name));
				    break;
				  case '*':
				    if($2.t->next == NULL) {
				      yyerror("Non pointer type.");
				      exit(1);
			            }
			            $$ = $2;
			            $$.t = $2.t->next;
			            $$.isPtr = true;
			            break;
				  case '+':
				    if($2.isArray) {
				        $2.isArray = false;
				        symEntry *tmp = currentSymTab->genTemp($2.t);
				        quad.emit(quadEntry(OP_R_INDEX, tmp->name, $2.base->name, $2.loc->name));
				        $2.loc = tmp;
				    } else if($2.isPtr) {
				        $2.isPtr = false;
				        symEntry *tmp = currentSymTab->genTemp($2.t);
				        quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, $2.base->name, $2.loc->name));
				        $2.loc = tmp;
				    }
				    $$ = $2;
				    break;
				  case '-':
				    if($2.isArray) {
				        $2.isArray = false;
				        symEntry *tmp = currentSymTab->genTemp($2.t);
				        quad.emit(quadEntry(OP_R_INDEX, tmp->name, $2.base->name, $2.loc->name));
				        $2.loc = tmp;
				    } else if($2.isPtr) {
				        $2.isPtr = false;
				        symEntry *tmp = currentSymTab->genTemp($2.t);
				        quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, $2.base->name, $2.loc->name));
				        $2.loc = tmp;
				    }
				    $$.loc = currentSymTab->genTemp($2.t);
				    $$.t = $$.loc->t;
				    quad.emit(quadEntry(OP_UMINUS, $$.loc->name, $2.loc->name));
				    break;
				  default:
				    break;
			      }
			  };
unary_operator		: PLUS						{$$ = '+';}
			| MINUS						{$$ = '-';}
			| AND						{$$ = '&';}
			| STAR						{$$ = '*';};

cast_expression:
          unary_expression
          {
              $$ = $1;
          };

multiplicative_expression:
			  cast_expression
			  {
			      $$ = $1;
			      if($1.isArray) {
				  $1.isArray = false;
				  $$.loc = currentSymTab->genTemp($1.t);
				  quad.emit(quadEntry(OP_R_INDEX, $$.loc->name, $1.base->name, $1.loc->name));
			      } else if($1.isPtr) {
				  $1.isPtr = false;
				  $$.loc = currentSymTab->genTemp($1.t);
				  quad.emit(quadEntry(OP_R_VAL_AT, $$.loc->name, $1.base->name, $1.loc->name));
			      }
			  }
			| multiplicative_expression STAR cast_expression 
			  {
			      if($3.isArray) {
				  $3.isArray = false;
				  symEntry *tmp = currentSymTab->genTemp($3.t);
				  quad.emit(quadEntry(OP_R_INDEX, tmp->name, $3.base->name, $3.loc->name));
				  $3.loc = tmp;
			      } else if($3.isPtr) {
				  $3.isPtr = false;
				  symEntry *tmp = currentSymTab->genTemp($3.t);
				  quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, $3.base->name, $3.loc->name));
				  $3.loc = tmp;
			      }
			      $$ = $1;
			      typeCheck(&($1), &($3));
			      $$.loc = currentSymTab->genTemp($3.t);
			      $$.t = $$.loc->t;
			      quad.emit(quadEntry(OP_MULT, $$.loc->name, $1.loc->name, $3.loc->name));
			  }
			| multiplicative_expression DIVIDE cast_expression
			  {
			      if($3.isArray) {
				  $3.isArray = false;
				  symEntry *tmp = currentSymTab->genTemp($3.t);
				  quad.emit(quadEntry(OP_R_INDEX, tmp->name, $3.base->name, $3.loc->name));
				  $3.loc = tmp;
			      } else if($3.isPtr) {
				  $3.isPtr = false;
				  symEntry *tmp = currentSymTab->genTemp($3.t);
				  quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, $3.base->name, $3.loc->name));
				  $3.loc = tmp;
			      }
			      $$ = $1;
			      typeCheck(&($1), &($3));
			      $$.loc = currentSymTab->genTemp($3.t);
			      $$.t = $$.loc->t;
			      quad.emit(quadEntry(OP_DIV, $$.loc->name, $1.loc->name, $3.loc->name));
			  }
			| multiplicative_expression PERCENT cast_expression
			  {
			      if($3.isArray) {
				  $3.isArray = false;
				  symEntry *tmp = currentSymTab->genTemp($3.t);
				  quad.emit(quadEntry(OP_R_INDEX, tmp->name, $3.base->name, $3.loc->name));
				  $3.loc = tmp;
			      } else if($3.isPtr) {
				  $3.isPtr = false;
				  symEntry *tmp = currentSymTab->genTemp($3.t);
				  quad.emit(quadEntry(OP_R_VAL_AT, tmp->name, $3.base->name, $3.loc->name));
				  $3.loc = tmp;
			      }
			      $$ = $1;
			      typeCheck(&($1), &($3));
			      $$.loc = currentSymTab->genTemp($3.t);
			      $$.t = $$.loc->type;
			      quad.emit(quadEntry(OP_MOD, $$.loc->name, $1.loc->name, $3.loc->name));
			  };
additive_expression:
			  multiplicative_expression
			  {
			      $$ = $1;
			  }
			| additive_expression PLUS multiplicative_expression
			  {
			      $$ = $1;
			      typeCheck(&($1), &($3));
			      $$.loc = currentSymTab->genTemp($3.t);
			      $$.t = $$.loc->t;
			      quad.emit(quadEntry(OP_PLUS, $$.loc->name, $1.loc->name, $3.loc->name));
			  }
			| additive_expression MINUS multiplicative_expression
			  {
			      $$ = $1;
			      typeCheck(&($1), &($3));
			      $$.loc = currentSymTab->genTemp($3.t);
			      $$.t = $$.loc->t;
			      quad.emit(quadEntry(OP_MINUS, $$.loc->name, $1.loc->name, $3.loc->name));
			  };
shift_expression:
			  additive_expression
			  {
			      $$ = $1;
			  }
			| shift_expression LT_LT additive_expression
			  {
			      type_expression e;
			      e.type = new type(t_INT);
			      if($1.t->pType == t_DOUBLE || !typeCheck(&e, &($1), true)) {
				  yyerror("Invalid type for operator <<\n");
				  exit(1);
			      }
			      if($3.t->pType == t_DOUBLE || !typeCheck(&e, &($3), true)) {
				  yyerror("Invalid type for operator <<\n");
				  exit(1);
			      }
			      $$ = $1;
			      $$.loc = currentSymTab->genTemp(e.t);
			      $$.t = $$.loc->t;
			      quad.emit(quadEntry(OP_SHL, $$.loc->name, $1.loc->name, $3.loc->name));
			  }
			| shift_expression GT_GT additive_expression
			  {
			      type_expression e;
			      e.type = new type(t_INT);
			      if($1.t->pType == t_DOUBLE || !typeCheck(&e, &($1), true)) {
				  yyerror("Invalid type for operator <<\n");
				  exit(1);
			      }
			      if($3.t->pType == t_DOUBLE || !typeCheck(&e, &($3), true)) {
				  yyerror("Invalid type for operator <<\n");
				  exit(1);
			      }
			      $$ = $1;
			      $$.loc = currentSymTab->genTemp(e.t);
			      $$.t = $$.loc->t;
			      quad.emit(quadEntry(OP_SHR, $$.loc->name, $1.loc->name, $3.loc->name));
			  };
relational_expression:
			  shift_expression
			  {
			      $$ = $1;
			  }
			| relational_expression LT shift_expression
			  {
			      typeCheck(&($1), &($3));
			      $$.t = new type(t_BOOL);
			      $$.trueList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_LT, "", $1.loc->name, $3.loc->name));
			      $$.falseList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_GOTO_O, ""));
			  }
			| relational_expression GT shift_expression
			  {
			      typeCheck(&($1), &($3));
			      $$.t = new type(t_BOOL);
			      $$.trueList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_GT, "", $1.loc->name, $3.loc->name));
			      $$.falseList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_GOTO_O, ""));   
			  }
			| relational_expression LT_EQUAL shift_expression
			  {
			      typeCheck(&($1), &($3));
			      $$.t = new type(t_BOOL);
			      $$.trueList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_LTE, "", $1.loc->name, $3. loc->name));
			      $$.falseList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_GOTO_O, ""));
			  }
			| relational_expression GT_EQUAL shift_expression
			  {
			      typeCheck(&($1), &($3));
			      $$.t = new type(t_BOOL);
			      $$.trueList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_GTE, "", $1.loc->name, $3.loc->name));
			      $$.falseList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_GOTO_O, ""));
			  };
equality_expression:
			  relational_expression
			  {
			      $$ = $1;
			  }
			| equality_expression EQUAL_EQUAL relational_expression
			  {
			      typeCheck(&($1), &($3));
			      $$.t = new type(t_BOOL);
			      $$.trueList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_EQ, "", $1.loc->name, $3.loc->name));
			      $$.falseList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_GOTO_O, ""));
			  }
			| equality_expression NOT_EQUAL relational_expression
			  {
			      typeCheck(&($1), &($3));
			      $$.t = new type(t_BOOL);
			      $$.trueList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_NEQ, "", $1.loc->name, $3.loc->name));
			      $$.falseList = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_GOTO_O, ""));
			  };
AND_expression:
			  equality_expression
			  {
			      $$ = $1;
			  }
			| AND_expression AND equality_expression
			  {
			      type_expression e;
			      e.type = new type(t_INT);
			      if($1.t->pType == t_DOUBLE || !typeCheck(&e, &($1), true)) {
				  yyerror("Invalid type for operator &\n");
				  exit(1);
			      }
			      if($3.t->pType == t_DOUBLE || !typeCheck(&e, &($3), true)) {
				  yyerror("Invalid type for operator &\n");
				  exit(1);
			      }
			      $$ = $1;
			      $$.loc = currentSymTab->genTemp(e.t);
			      $$.t = $$.loc->t;
			      quad.emit(quadEntry(OP_BW_AND, $$.loc->name, $1.loc->name, $3.loc->name));
			  };
exclusive_OR_expression:
			  AND_expression
			  {
			      $$ = $1;
			  }
			| exclusive_OR_expression CAP AND_expression
			  {
			      type_expression e;
			      e.type = new type(t_INT);
			      if($1.t->pType == t_DOUBLE || !typeCheck(&e, &($1), true)) {
				  yyerror("Invalid type for operator &\n");
				  exit(1);
			      }
			      if($3.t->pType == t_DOUBLE || !typeCheck(&e, &($3), true)) {
				  yyerror("Invalid type for operator &\n");
				  exit(1);
			      }
			      $$ = $1;
			      $$.loc = currentSymTab->genTemp(e.t);
			      $$.t = $$.loc->t;
			      quad.emit(quadEntry(OP_BW_XOR, $$.loc->name, $1.loc->name, $3.loc->name));
			  };

inclusive_OR_expression:
			  exclusive_OR_expression
			  {
			      $$ = $1;
			  }
			| inclusive_OR_expression OR exclusive_OR_expression
			  {
			      type_expression e;
			      e.type = new type(t_INT);
			      if($1.t->pType == t_DOUBLE || !typeCheck(&e, &($1), true)) {
				  yyerror("Invalid type for operator &\n");
				  exit(1);
			      }
			      if($3.t->pType == t_DOUBLE || !typeCheck(&e, &($3), true)) {
				  yyerror("Invalid type for operator &\n");
				  exit(1);
			      }
			      $$ = $1;
			      $$.loc = currentSymTab->genTemp(e.t);
			      $$.t = $$.loc->t;
			      quad.emit(quadEntry(OP_BW_OR, $$.loc->name, $1.loc->name, $3.loc->name));
			  };

logical_AND_expression:
			  inclusive_OR_expression
			  {
			      $$ = $1;
			  }
			| logical_AND_expression AND_AND M inclusive_OR_expression
			  {
			      backPatch($1.trueList, $3);
			      $$.t = new type(t_BOOL);
			      $$.trueList = $4.trueList;
			      $$.falseList = mergeList($1.falseList, $4.falseList);
			  };

logical_OR_expression:
			  logical_AND_expression
			  {
			      $$ = $1;
			  }
			| logical_OR_expression OR_OR M logical_AND_expression
			  {
			      backPatch($1.falseList, $3);
			      $$.t = new type(t_BOOL);
			      $$.trueList = mergeList($1.trueList, $4.trueList);
			      $$.falseList = $4.falseList;
			  };
conditional_expression:
			  logical_OR_expression
			  {
			      $$ = $1;
			  }
			| logical_OR_expression N QUESTION M expression N COLON M conditional_expression
			  {
			      $$.loc = currentSymTab->genTemp($5.t);
			      quad.emit(quadEntry(OP_COPY, $$.loc->name, $9.loc->name));
			      List *l = new List(quad.nextInstr);
			      quad.emit(quadEntry(OP_GOTO_O, ""));
			      backPatch($6, quad.nextInstr);
			      quad.emit(quadEntry(OP_COPY, $$.loc->name, $5.loc->name));
			      l = mergeList(l, new List(quad.nextInstr));
			      quad.emit(quadEntry(OP_GOTO_O, ""));
			      backPatch($2, quad.nextInstr);
			      conv2Bool(&($1));
			      backPatch($1.trueList, $4);
			      backPatch($1.falseList, $8);
			      backPatch(l, quad.nextInstr);
			  };
assignment_expression_opt:
			  {
			      $$.trueList = NULL;
			      $$.falseList = NULL;
			      $$.loc = NULL;
			  }
			| assignment_expression
			  {
			      $$ = $1;
			  };

assignment_expression:
			  conditional_expression
			  {
			      $$ = $1;
			  }
			| unary_expression assignment_operator assignment_expression
			  { 
			      if($1.t->pType == t_ARR) {
				  yyerror("Cannot assign arrays this way.");
				  exit(1);
			      }
			      if($1.t->pType == t_PTR) {
				  if($3.t->pType == t_DOUBLE)
				     yyerror("Pointer cannot be stored in double.");
				  else
				     quad.emit(quadEntry(OP_COPY, $1.loc->name, $3.loc->name));
			      } else {
				  if(!typeCheck(&($1), &($3), true)) {
				      yyerror("Incompatible assignment");
				      exit(1);
				  }
				  if($1.isArray) {
				      $1.isArray = false;
				      quad.emit(quadEntry(OP_L_INDEX, $1.base->name, $1.loc->name, $3.loc->name));
				  } else if($1.isPtr) {
				      $1.isPtr = false;
				      quad.emit(quadEntry(OP_L_VAL_AT, $1.loc->name, $3.loc->name));
				  } else {
				      quad.emit(quadEntry(OP_COPY, $1.loc->name, $3.loc->name));
				  }
			      }
			      $$ = $3;
			  };
assignment_operator	: EQUAL			{}
			| STAR_EQUAL		{}
			| DIVIDE_EQUAL		{}
			| PERCENT_EQUAL		{}
			| PLUS_EQUAL		{}
			| MINUS_EQUAL		{}
			| LT_LT_EQUAL		{}
			| GT_GT_EQUAL		{}
			| AND_EQUAL		{}
			| CAP_EQUAL		{}
			| OR_EQUAL		{};


expression:
			  assignment_expression
			  {
			      $$ = $1;
			  }
			| expression COMMA assignment_expression
			  {
			      $$ = $3;
			  };

constant_expression:
			  conditional_expression
			  {
			      $$ = $1;
			  };

declaration:
			  declaration_specifiers init_declarator_list_opt SEMI_COLON
			  { 
			      if($2.t->pType == t_FUNC) {
				  currentSymTab = new symTable();
			      }
			  };

declaration_specifiers_opt:
			  {

			  }
			| declaration_specifiers
			  {
			      $$.type = $1.type;
			      $$.width = $1.width;
			  }
			;

declaration_specifiers:
			type_specifier declaration_specifiers_opt
			  {
			      $$.type = $1.type;
			      $$.width = $1.width;
			      quad.type = $1.type;
			      quad.width = $1.width;
			  };
init_declarator_list_opt:
			  {

			  }
			| init_declarator_list
			  {
			      $$ = $1;
			  };

init_declarator_list:
			  init_declarator
			  {
			      $$ = $1;
			  }
			| init_declarator_list COMMA init_declarator
			  {
			      $$ = $3;
			  };
init_declarator:
			  declarator
			  {
			      $$ = $1;     
			  }
			| declarator EQUAL initializer
			  { 
				typeCheck(&($1), &($3), true);
				if($3.loc->wasInitialised)
				  currentSymTab->update($1.loc, $3.loc->init);
				quad.emit(quadEntry(OP_COPY, $1.loc->name, $3.loc->name));
				$$ = $1;
			  };
type_specifier:
			  VOID
			  {
			      $$.t = new type(t_VOID);
			      $$.width = SIZE_OF_VOID;
			  }
			| CHAR
			  {
			      $$.t = new type(t_CHAR);
			      $$.width = SIZE_OF_CHAR;
			  }
			| SHORT
			  {
			      $$.t = new type(t_INT);
			      $$.width = SIZE_OF_INT;
			  }
			| INT
			  {
			      $$.t = new type(t_INT);
			      $$.width = SIZE_OF_INT;
			  }
			| LONG
			  {
			      $$.t = new type(t_INT);
			      $$.width = SIZE_OF_INT;
			  }
			| DOUBLE
			  {
			      $$.t = new type(t_DOUBLE);
			      $$.width = SIZE_OF_DOUBLE;
			  }
			| FLOAT
			  {
			      $$.t = new type(t_DOUBLE);
			      $$.width = SIZE_OF_DOUBLE;
			  }
			| SIGNED
			  {

			  }
			| UNSIGNED
			  {
			      $$.t = new type(t_INT);
			      $$.width = SIZE_OF_INT;
			  }
			| BOOL
			  {
			      $$.t = new type(t_INT);
			      $$.width = SIZE_OF_INT;
			  };
// Merging pointer_opt with declarator.
declarator:
          direct_declarator
          {
              $$ = $1;
          }
        | pointer direct_declarator
          {
              type *head = new type(t_VOID);
              if($2.loc->nestedTable == NULL)
		 head->next = $2.t;
              else 
		 head->next = $2.loc->nestedTable->entries[0]->t;
              type *ptr = head;

              int oldSize = $2.loc->size;
              if($2.loc->nestedTable != NULL) oldSize = $2.loc->nestedTable->entries[0]->size;
              int newSize = SIZE_OF_PTR;
              
              while(ptr->next->next != NULL) {
                  newSize *= ptr->size;
                  ptr = ptr->next;
              }

              type *ptr2 = $1.t;
              while(ptr2->next != NULL) ptr2 = ptr2->next;
              ptr2->next = ptr->next;
              ptr->next = $1.t; 
             
              if($2.loc->nestedTable == NULL) {
                  currentSymTab->offset += newSize - oldSize; 
                  $2.loc->t = head->next;
                  $2.loc->size = newSize;
                  $2.t = $2.loc->t;
              } else {
                  // change offset
                  for(int i = 1; i < $2.loc->nestedTable->entries.size(); i++) {
                      $2.loc->nestedTable->entries[i]->offset += newSize - oldSize;
                  }
                  $2.loc->nestedTable->entries[0]->t = head->next;
                  $2.loc->nestedTable->entries[0]->size = newSize;
                  $2.loc->nestedTable->offset += newSize - oldSize;
                  $2.t = head->next;
              }
              $$ = $2;
              
              delete head;
          };

direct_declarator:
          identifier
          {
              $$.loc = currentSymTab->lookUp(*($1.strVal));
              currentSymTab->update($$.loc, quad.type, quad.width);
              $$.type = $$.loc->type;
          }
        | LP declarator RP
          {
              $$ = $2;
          }
        | direct_declarator LSB assignment_expression_opt RSB
          { 
              type *p = new type(t_ARR);
              if($4.loc == NULL) {
                  if($1.t->pType == t_INT || $1.t->pType == t_VOID || $1.t->pType == t_CHAR || $1.t->pType == t_DOUBLE) {
                      p = new type(t_PTR);
                      p->next = $1.t;
                      $1.t = p;
                      $1.loc->t = p;
                      int oldSize = $1.loc->size;
                      $1.loc->size += SIZE_OF_PTR - oldSize;
                      currentSymTab->offset += SIZE_OF_PTR - oldSize;
                      $$ = $1;
                  } else {
                      yyerror("Array type mein load hai!\n");
                      exit(1);
                  }
              } else {
                if($4.loc->t->pType == t_INT) 
			p->size = $4.loc->init.intVal;
                else {
                    yyerror("Non integer type array size.");
                    exit(1);
                }
                int oldSize = $1.loc->size;

                p->next = $1.t;
                type *head = new type();
                head->next = $1.t;
                type *ptr = head;
                while(ptr->next->next != NULL) ptr = ptr->next;

                p->next = ptr->next;
                ptr->next = p;

                int newSize;
                if($4.loc != NULL) newSize = head->next->getSize();
                else newSize = SIZE_OF_PTR;


                $1.type = head->next;
                $1.loc->t = head->next;
                $1.loc->size = newSize;
 

                for(int i = currentSymTab->entries.size() - 1; i >= 0; i--) {
                    if(currentSymTab->entries[i] == $1.loc) break;
                    currentSymTab->entries[i]->offset += newSize - oldSize;
                }
                currentSymTab->offset += newSize - oldSize;

                $$ = $1;
              }
          }
        | direct_declarator LP parameter_type_list RP
          {
              // save the return type
              // save the nestedTable
              // update its name
              symEntry *s = globalSymTab->lookUp($1.loc->name);
              globalSymTab->update(s, new type(t_FUNC), SIZE_OF_FUNC);
              s->nestedTable = currentSymTab;
              currentSymTab->name = "ST (" + $1.loc->name + ")";
              quad.emit(quadEntry(OP_FUNC_START, $1.loc->name));
              $1.loc->name = "__retVal";
              $1.loc->scope = "return";
              $$.loc = s;
              $$.t = $$.loc->t;
          }
        | direct_declarator LP identifier_list_opt RP
          {

          };

pointer:
          STAR
          {
              $$.t = new type(t_PTR);
          }
        | STAR pointer
          {
              $$.t = new type(t_PTR);
              $$.t->next = $3.t;
          };

parameter_type_list:
          parameter_list
          {

          };

parameter_list:
          parameter_declaration
          {

          }
        | parameter_list COMMA parameter_declaration
          {

          };

parameter_declaration:
          declaration_specifiers declarator
          {
              $2.loc->scope = "param";
          }
        | declaration_specifiers
          {

          };

identifier_list_opt:
	{}
	| identifier_list {};

identifier_list:
          identifier {}
        | identifier_list COMMA identifier {};

initializer:
          assignment_expression
          {
              $$ = $1;
          }
        | LCB initializer_row_list RCB
          {

          };
initializer_row_list:
	initializer_row {}
	| initializer_row_list SEMI_COLON initializer_row {};
initializer_row:
        designation_opt initializer
        {

        }
      | initializer_row COMMA designation_opt initializer
        {

        };

designation_opt:
        {

        }
      | designation
        {

        };

designation:
        designator_list EQUAL
        {

        };

designator_list:
        designator
        {

        }
      | designator_list designator
        {

        };

designator:
        LSB constant_expression RSB
        {

        }
      | DOT identifier
        {

        };

statement:
        labeled_statement
        {

        }
      | compound_statement
        {
            $$ = $1;
        }
      | expression_statement
        {
            $$ = NULL;
        }
      | selection_statement
        {
            $$ = $1;
        }
      | iteration_statement
        {
            $$ = $1;
        }
      | jump_statement
        {
            $$ = $1;
        };

labeled_statement:
        identifier COLON statement
        {
            // Not supported          
        }
      | CASE constant_expression COLON statement
        {
            // Not supported
        }
      | DEFAULT COLON statement
        {
            // Not supported
        };

compound_statement:
      LCB block_item_list_opt RCB
        {
            $$ = $2;
        };

block_item_list_opt:
        {
            $$ = NULL;
        }
      | block_item_list
        {
            $$ = $1;
        };

block_item_list:
        block_item
        {
            $$ = $1;
        }
      | block_item_list M block_item
        {
            backPatch($1, $2);
            $$ = $3;
        };

block_item:
        declaration
        {
            $$ = NULL;
        }
      | statement
        {
            $$ = $1;
        };

expression_statement:
      expression_opt SEMI_COLON
      ;

selection_statement:
        IF LP expression N RP M statement
        {   
            List *l = mergeList($7, new List(quad.nextInstr));
            quad.emit(quadEntry(OP_GOTO_O, ""));
            backPatch($4, quad.nextInstr);
            conv2Bool(&($3));
            backPatch($3.trueList, $6);
            $$ = mergeList($3.falseList, l);
        }
      | IF LP expression N RP M statement N ELSE M statement
        { 
            List *l = mergeList($7, $8);
            l = mergeList(l, new List(quad.nextInstr));
            quad.emit(quadEntry(OP_GOTO_O, ""));
            backPatch($4, quad.nextInstr);
            conv2Bool(&($3));
            backPatch($3.trueList, $6);
            backPatch($3.falseList, $10);
            $$ = mergeList(l, $11);
        }
      | SWITCH LP expression RP statement
        {
	    // Not supported
        };

iteration_statement:
        WHILE LP M expression N RP M statement
        { 
            List *l = mergeList($8, new List(quad.nextInstr));
            quad.emit(quadEntry(OP_GOTO_O, ""));
            backPatch($5, quad.nextInstr);
            conv2Bool(&($4));
            backPatch($4.trueList, $7);
            backPatch(l, $3);
            $$ = $4.falseList;
        }
      | DO M statement WHILE LP M expression RP SEMI_COLON
        {
            conv2Bool(&($7));
            backPatch($7.trueList, $2);
            backPatch($3, $6);
            $$ = $7.falseList;
        }
      | FOR LP expression_opt SEMI_COLON M expression_opt N SEMI_COLON M expression_opt N RP M statement
        {
            List *l = mergeList($14, new List(quad.nextInstr));
            quad.emit(quadEntry(OP_GOTO_O, ""));
            backPatch(l, $9);
            backPatch($7, quad.nextInstr);
            conv2Bool(&($6));
            backPatch($6.trueList, $13);
            backPatch($11, $5);
            $$ = $6.falseList;
        }
      | FOR LP declaration expression_opt SEMI_COLON expression_opt RP statement
        {
            // Not supported
        };

jump_statement:
        GOTO identifier ';'
        {
            // Not supported
        }
      | CONTINUE ';'
        {

        }
      | BREAK ';'
        {

        }
      | RETURN ';'
        {
            quad.emit(quadEntry(OP_RETURN, ""));
            $$ = NULL;
        }
      | RETURN expression ';'
        {
            // convert the expression to the return type of the function
            type_expression e; e.t = currentSymTab->entries[0]->t;
            typeCheck(&e, &($2), true);
            // save the expression in return value of the function
            quad.emit(quadEntry(OP_RETURN_VAL, $2.loc->name));
            $$ = NULL;
        };

expression_opt:
        { 
            $$.t = new type(t_BOOL);
            $$.trueList = NULL;
            $$.falseList = NULL;
        }
      | expression
        {
            $$ = $1;
        };

translation_unit:
        external_declaration
        {

        }
      | translation_unit external_declaration
        {

        };

external_declaration:
        function_definition
        {

        }
      | declaration
        {
            quad.quads.pop_back();
            quad.nextInstr--;
        };

function_definition:
        declaration_specifiers declarator declaration_list_opt compound_statement
        {   
            $2.loc->nestedTable = currentSymTab;
            currentSymTab = new symTable();
            backPatch($4, quad.nextInstr);
            quad.emit(quadEntry(OP_FUNC_END, $2.loc->name));
        };

declaration_list_opt:
        {

        }
      | declaration_list
        {

        };

declaration_list:
        declaration
        {

        }
      | declaration_list declaration
        {

        }
      ;

M    :
       {
          $$ = quad.nextInstr;
       };
N    :
      {
          $$ = new List(quad.nextInstr);
          quad.emit(quadEntry(OP_GOTO_O, ""));
      };

%%                     /* C code */

void yyerror(char *s){
  printf("\nERROR %s at %s",s,yytext);
}
