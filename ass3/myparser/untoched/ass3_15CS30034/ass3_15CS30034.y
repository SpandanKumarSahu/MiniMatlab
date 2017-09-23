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

%%

void yyerror(char *s)
{
  printf("\nERROR %s around %s",s,yytext);
}
