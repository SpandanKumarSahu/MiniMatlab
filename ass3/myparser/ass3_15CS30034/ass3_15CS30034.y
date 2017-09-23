%{
#include <stdio.h>
void yyerror(char *s);
extern int yylex();
%}

%start translation_unit

%token identifier
%token constant
%token string_literal

%token arrow_op
%token inc_op
%token dec_op
%token ls_op
%token rs_op
%token le_op
%token ge_op
%token ee_op
%token ne_op
%token or_op
%token and_op
%token trans_op
%token star_equal
%token divide_equal
%token mod_equal
%token plus_equal
%token minus_equal
%token ls_equal
%token rs_equal
%token and_equal
%token xor_equal
%token or_equal

%token VOID
%token CHAR
%token SHORT
%token INT
%token LONG
%token FLOAT
%token DOUBLE
%token MATRIX
%token SIGNED
%token UNSIGNED
%token BOOL
%token CASE
%token DEFAULT
%token IF
%token ELSE
%token SWITCH
%token WHILE
%token DO
%token FOR
%token GOTO
%token CONTINUE
%token BREAK
%token RETURN

%%
/*Expressions*/
primary_expression : identifier {printf("primary_expression : identifier\n");}
		     |constant {printf("primary_expression : constant\n");}
		     |string_literal {printf("primary_expression : string_literal\n");}
		     |'('expression')' {printf("primary_expression : (expression)\n");};
postfix_expression : primary_expression {printf("postfix_expression : primary_expression\n");}
		     |postfix_expression '[' expression ']' {printf("postfix_expression : postfix_expression [ expression ]\n");}
		     |postfix_expression '(' argument_expression_list_opt ')' {printf("postfix_expression : postfix_expression (arguement expression list)\n");}
		     |postfix_expression '.' identifier {printf("postfix_expression : postfix_expression . identifier\n");}
		     |postfix_expression arrow_op identifier {printf("postfix_expression : postfix_expression -> identifier\n");}
		     |postfix_expression inc_op {printf("postfix_expression : postfix_expression ++\n");}
		     |postfix_expression dec_op {printf("postfix_expression : postfix_expression --\n");}
		     |postfix_expression trans_op{printf("postfix_expression : postfix_expression .'\n");};
argument_expression_list : assignment_expression{printf("argument_expression_list : assignment_expression\n");}
      			   |argument_expression_list ',' assignment_expression{printf("argument_expression_list : assignment_expression_list\n");};
argument_expression_list_opt :  %empty {printf("argument_expression_list_opt\n");}
				|argument_expression_list{printf("argument_expression_list_opt : argument_expression_list\n");};
unary_expression : postfix_expression {printf("unary_expression : postfix_expression\n");}
		   |inc_op unary_expression{printf("unary_expression : ++ unary_expression\n");}
		   |dec_op unary_expression{printf("unary_expression : -- unary_expression\n");}
 		   |unary_operator cast_expression{printf("unary_expression : unary_operator cast_expression\n");};
unary_operator : '&'{printf("unary_operator : &");} | '*'{printf("unary_operator : *");} | '+'{printf("unary_operator : +");} | '-'{printf("unary_operator : -");} ;
cast_expression : unary_expression{printf("cast_expression : unary_expression\n");};
multiplicative_expression : cast_expression {printf("multiplicative_expression : cast_expression\n");}
			    |multiplicative_expression '*' cast_expression {printf("multiplicative_expression : multiplicative_expression * cast_expression\n");}
			    |multiplicative_expression '/' cast_expression {printf("multiplicative_expression : multiplicative_expression / cast_expression\n");}
			    |multiplicative_expression '%' cast_expression {printf("multiplicative_expression : multiplicative_expression %% .cast_expression\n");};
additive_expression : multiplicative_expression{printf("additive_expression : multiplicative_expression\n");}
		      |additive_expression '+' multiplicative_expression{printf("additive_expression : additive_expression + multiplicative_expression\n");}
		      |additive_expression '-' multiplicative_expression{printf("additive_expression : additive_expression - multiplicative_expression\n");};
shift_expression : additive_expression{printf("shift_expression : additive_expression\n");}
		   |shift_expression ls_op additive_expression{printf("shift_expression : shift_expression << additive_expression\n");}
		   |shift_expression rs_op additive_expression{printf("shift_expression : shift_expression >> additive_expression\n");};
relational_expression : shift_expression{printf("relational_expression : shift_expression\n");}
			|relational_expression '<' shift_expression{printf("relational_expression : relational_expression < shift_expression\n");}
			|relational_expression '>' shift_expression{printf("relational_expression : relational_expression > shift_expression\n");}
			|relational_expression le_op shift_expression{printf("relational_expression : relational_expression <= shift_expression\n");}
			|relational_expression ge_op shift_expression{printf("relational_expression : relational_expression <= shift_expression\n");};
equality_expression : relational_expression{printf("equality_expression : relational_expression\n");}
		      |equality_expression ee_op relational_expression{printf("equality_expression : equality_expression == relational_expression\n");}
		      |equality_expression ne_op relational_expression{printf("equality_expression : equality_expression != relational_expression\n");};
AND_expression : equality_expression{printf("AND_expression : equality_expression\n");}
		 |AND_expression '&' equality_expression{printf("AND_expression : AND_expression & equality_expression\n");};
exclusive_OR_expression : AND_expression{printf("exclusive_OR_expression : AND_expression\n");}
			  |exclusive_OR_expression '^' AND_expression{printf("exclusive_OR_expression : exclusive_OR_expression ^ AND_expression\n");};
inclusive_OR_expression : exclusive_OR_expression{printf("inclusive_OR_expression : exclusive_OR_expression\n");}
			  |inclusive_OR_expression '|' exclusive_OR_expression{printf("inclusive_OR_expression : inclusive_OR_expression '|' exclusive_OR_expression\n");};
logical_AND_expression : inclusive_OR_expression{printf("logical_AND_expression : inclusive_OR_expression\n");}
			 |logical_AND_expression and_op inclusive_OR_expression{printf("logical_AND_expression : logical_AND_expression && inclusive_OR_expression\n");};
logical_OR_expression : logical_AND_expression{printf("logical_OR_expression : logical_AND_expression\n");}
			|logical_OR_expression or_op logical_AND_expression{printf("logical_OR_expression : logical_OR_expression || logical_AND_expression\n");};
conditional_expression : logical_OR_expression{printf("conditional_expression : logical_OR_expression\n");}
			 |logical_OR_expression '?' expression ':' conditional_expression{printf("conditional_expression : logical_OR_expression '?' expression ':' conditional_expression\n");};
assignment_expression : conditional_expression{printf("assignment_expression : conditional_expression\n");}
			|unary_expression assignment_operator assignment_expression{printf("assignment_expression : unary_expression assignment_operator assignment_expression\n");};
assignment_operator : '=' 
		      | star_equal {printf("assignment_operator : *= \n");}
		      | divide_equal {printf("assignment_operator : /= \n");}
		      | mod_equal {printf("assignment_operator : %%= \n");}
	    	      | plus_equal {printf("assignment_operator : += \n");}
		      | minus_equal {printf("assignment_operator : -= \n");}
		      | ls_equal {printf("assignment_operator : <<= \n");}
		      | rs_equal {printf("assignment_operator : >>= \n");}
		      | and_equal {printf("assignment_operator : &= \n");}
		      | xor_equal {printf("assignment_operator : ^= \n");}
		      | or_equal {printf("assignment_operator : |= \n");};
expression : assignment_expression {printf("expression : assignment_expression\n");}
	     |expression ',' assignment_expression {printf("expression : expression ',' assignment_expression\n");};
constant_expression : conditional_expression{printf("constant_expression : conditional_expression\n");};

/*Declarations*/
declaration : declaration_specifiers init_declarator_list_opt ';' {printf("declaration : declaration_specifiers init_declarator_list_opt\n");};
declaration_specifiers : type_specifier declaration_specifiers_opt{printf("declaration_specifiers : type_specifier declaration_specifiers_opt\n");};
declaration_specifiers_opt : %empty{printf("declaration_specifiers_opt\n");}
			     |declaration_specifiers{printf("declaration_specifiers_opt : declaration_specifiers\n");};
init_declarator_list_opt : %empty{printf("init_declarator_list_opt\n");}
			   |init_declarator_list {printf("declaration : declaration_specifiers init_declarator_list_opt\n");};
init_declarator_list : init_declarator {printf("init_declarator_list : init_declarator\n");}
		       |init_declarator_list',' init_declarator{printf("\n");};
init_declarator : declarator{printf("init_declarator : declarator\n");}
		  |declarator '=' initializer  {printf("init_declarator : declarator = initializer\n");};
type_specifier : VOID{printf("type_specifier : VOID\n");} 
		| CHAR{printf("type_specifier : CHAR\n");} 
		| SHORT{printf("type_specifier : SHORT\n");} 
		| INT{printf("type_specifier : INT\n");} 
		| LONG{printf("type_specifier : LONG\n");}
		| FLOAT{printf("type_specifier : FLOAT\n");} 
		| DOUBLE{printf("type_specifier : DOUBLE\n");} 
		| MATRIX{printf("type_specifier : MATRIX\n");} 
		| SIGNED{printf("type_specifier : SIGNED\n");} 
		| UNSIGNED{printf("type_specifier : UNSIGNED\n");} 
		| BOOL{printf("type_specifier : BOOL\n");};
declarator : pointer_opt direct_declarator{printf("declarator : pointer_opt direct_declarator\n");};
direct_declarator : identifier{printf("direct_declarator : identifier\n");}
		    |'(' declarator ')'{printf("direct_declarator : ( declarator )\n");}
		    |direct_declarator '[' assignment_expression_opt ']'{printf("direct_declarator : direct_declarator [ assignment_expression_opt ]\n");}
		    |direct_declarator '(' parameter_type_list ')'{printf("direct_declarator : direct_declarator ( parameter_type_list )\n");}
		    |direct_declarator '(' identifier_list_opt ')'{printf("direct_declarator : direct_declarator ( identifier_list_opt )\n");};
identifier_list_opt : %empty{printf("identifier_list_opt\n");}
		      |identifier_list{printf("identifier_list_opt : identifier_list\n");};
assignment_expression_opt : %empty{printf("assignment_expression_opt\n");} 
			    |assignment_expression{printf("assignment_expression_opt : assignment_expression\n");};
pointer : '*' pointer_opt{printf("pointer : * pointer_opt\n");};
pointer_opt : %empty{printf("pointer_opt\n");}
	      |pointer{printf("pointer_opt : pointer\n");};
parameter_type_list : parameter_list{printf("parameter_type_list : parameter_list\n");};
parameter_list : parameter_declaration{printf("parameter_list : parameter_declaration\n");}
		  |parameter_list ',' parameter_declaration{printf("parameter_list : parameter_list , parameter_declaration\n");};
parameter_declaration : declaration_specifiers declarator{printf("parameter_declaration : declaration_specifiers declarator\n");}
			|declaration_specifiers{printf("parameter_declaration : declaration_specifiers\n");};
identifier_list : identifier{printf("identifier_list : identifier\n");} 
		  |identifier_list ',' identifier{printf("identifier_list : identifier_list , identifieridentifier\n");};
initializer : assignment_expression{printf("initializer : assignment_expression\n");}
	      |'{' initializer_row_list '}'{printf("initializer : { initializer_row_list }\n");};
initializer_row_list : initializer_row{printf("initializer_row_list : initializer_row\n");}
		       |initializer_row_list ';' initializer_row{printf("initializer_row_list : initializer_row_list ; initializer_row\n");};
initializer_row : designation_opt initializer{printf("initializer_row : designation_opt initializer\n");}
		  |initializer_row ',' designation_opt initializer{printf("initializer_row : initializer_row , designation_opt initializer\n");};
designation_opt : %empty{printf("designation_opt\n");}
		  |designator_list '='{printf("designation_opt : designator_list =\n");};
designator_list : designator{printf("designator_list : designator\n");}
		  |designator_list designator{printf("designator_list : designator_list designator\n");};
designator : '[' constant_expression ']'{printf("designator : [ constant_expression ]\n");}
	     |'.' identifier{printf("designator : . identifier\n");};

/*Statements*/
statement : labeled_statement{printf("statement : labeled_statement\n");}
	    |compound_statement{printf("statement : compound_statement\n");}
	    |expression_statement{printf("statement : expression_statement\n");}
	    |selection_statement{printf("statement : selection_statement\n");}
	    |iteration_statement{printf("statement : iteration_statement\n");}
	    |jump_statement{printf("statement : jump_statement\n");};
labeled_statement : identifier ':' statement{printf("labeled_statement : identifier : statement\n");}
		    |CASE constant_expression ':' statement{printf("statement : CASE constant_expression : statement\n");}
		    |DEFAULT ':' statement{printf("statement : DEFAULT : statement\n");};
compound_statement : '{' block_item_list_opt '}'{printf("compound_statement : { block_item_list_opt }\n");};
block_item_list_opt : %empty{printf("block_item_list_opt\n");}
		      |block_item_list{printf("block_item_list_opt : block_item_list\n");};
block_item_list : block_item{printf("block_item_list : block_item\n");}
		  |block_item_list block_item{printf("block_item_list : block_item_list block_item\n");};
block_item : declaration{printf("block_item : declaration\n");}
	     |statement{printf("block_item : statement\n");};
expression_statement : expression_opt ';' {printf("expression_statement : expression_opt ; \n");};
expression_opt : %empty{printf("expression_opt\n");}
		 |expression{printf("expression_opt : expression\n");};
selection_statement : IF '(' expression ')' statement{printf("selection_statement : IF ( expression ) statement\n");}
		      |IF '(' expression ')' statement ELSE statement{printf("selection_statement : IF ( expression ) statement ELSE statement\n");}
		      |SWITCH '(' expression ')' statement{printf("selection_statement : SWITCH ( expression ) statement\n");};
iteration_statement : WHILE '(' expression ')' statement{printf("iteration_statement : WHILE ( expression ) statement\n");}
		      |DO statement WHILE '(' expression ')' ';'{printf("iteration_statement : DO statement WHILE '(' expression ')' ';'\n");}
		      |FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement{printf("iteration_statement: FOR ( expression_opt ; expression_opt ; expression_opt )\n");}
		      |FOR '(' declaration expression_opt ';' expression_opt ')' statement{printf("iteration_statement : FOR ( declaration expression_opt ; expression_opt )\n");};
jump_statement : GOTO identifier ';'{printf("jump_statement : GOTO identifier ;\n");}
		 |CONTINUE ';'{printf("jump_statement : CONTINUE ;\n");}
		 |BREAK ';'{printf("jump_statement : BREAK\n");}
		 |RETURN expression_opt ';' {printf("jump_statement : RETURN expression_opt ;\n");};
/*External Definition*/
translation_unit : external_declaration {printf("translation_unit : external_declaration\n");}
|translation_unit external_declaration {printf("translation_unit : external_declaration translation_unit\n");}
external_declaration : function_definition{printf("external_declaration : function_definition\n");}
		       |declaration{printf("external_declaration : declaration\n");};
function_definition : declaration_specifiers declarator declaration_list_opt compound_statement{printf("function_definition : declaration_specifiers declarator declaration_list_opt compound_statement\n");};
declaration_list_opt : %empty{printf("declaration_list_opt\n");}
			|declaration_list{printf("declaration_list_opt : declaration_list\n");};
declaration_list : declaration{printf("declaration_list : declaration\n");}
		   |declaration_list declaration{printf("declaration_list : declaration_list declaration\n");};
%%

void yyerror(char *s)
{
  printf("\nERROR %s around %s",s,yytext);
}
