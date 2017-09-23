%{
#include <stdio.h>
void yyerror(char *s);
extern int yylex();
%}

%start external_defination
%token UNSIGNED INT BREAK CASE FLOAT FOR SIGNED BOOL CONTINUE DO DOUBLE
%token LONG ELSE RETURN VOID CHAR SHORT WHILE GOTO DEFAULT SWITCH IF MATRIX

%token PLUS MINUS STAR DIVIDE GT LT AND CAP OR DOT SEMI_COLON APOS
%token LSB RSB LCB RCB LP RP COMMA EQUAL QUESTION NOT COLON PERCENT
%token STAR_EQUAL DIVIDE_EQUAL PERCENT_EQUAL MINUS_EQUAL LT_LT_EQUAL
%token GT_GT_EQUAL AND_EQUAL CAP_EQUAL OR_EQUAL OR_OR AND_AND
%token EQUAL_EQUAL NOT_EQUAL LT_EQUAL GT_EQUAL LT_LT GT_GT
%token PLUS_PLUS MINUS_MINUS MINUS_GT DOT_APOS PLUS_EQUAL

%token CONSTANT
%token IDENTIFIER
%token STRING_LITERAL

%%

/* descriptions of expected inputs     corresponding actions (in C) */

expression	: assignment_expression 			{printf("expression : assignment_expression\n");}
		| expression COMMA assignment_expression	{printf("expression : expression , assignment_expression\n");};
constant_expression 	: conditional_expression		{printf("constant_expression : conditional_expression\n");};
assignment_expression	: conditional_expression	{printf("assignment_expression : conditional_expression\n");}
			| unary_expression assignment_operator assignment_expression
					{printf("assignment_expression : unary_expression assignment_operator assignment_expression\n");};
assignment_operator	: EQUAL			{printf("assignment_operator : = \n");}
			| STAR_EQUAL		{printf("assignment_operator : *= \n");}
			| DIVIDE_EQUAL		{printf("assignment_operator : /= \n");}
			| PERCENT_EQUAL		{printf("assignment_operator : %= \n");}
			| PLUS_EQUAL		{printf("assignment_operator : += \n");}
			| MINUS_EQUAL		{printf("assignment_operator : -= \n");}
			| LT_LT_EQUAL		{printf("assignment_operator : <<= \n");}
			| GT_GT_EQUAL		{printf("assignment_operator : >>= \n");}
			| AND_EQUAL		{printf("assignment_operator : &= \n");}
			| CAP_EQUAL		{printf("assignment_operator : ^= \n");}
			| OR_EQUAL		{printf("assignment_operator : |= \n");};
conditional_expression	: logical_OR_expression	{printf("conditional_expression : logical_OR_expression\n");}
			| logical_OR_expression QUESTION expression COLON conditional_expression
					{printf("conditional_expression : logical_OR_expression '?' expression ':' conditional_expression\n");};
logical_OR_expression	: logical_AND_expression	{printf("conditional_expression : logical_OR_expression\n");}
			| logical_OR_expression OR_OR logical_AND_expression
						{printf("logical_AND_expression : logical_AND_expression && inclusive_OR_expression\n");};
logical_AND_expression	: inclusive_OR_expression	{printf("logical_AND_expression : inclusive_OR_expression\n");}
			| logical_AND_expression AND_AND inclusive_OR_expression
						{printf("logical_AND_expression : logical_AND_expression && inclusive_OR_expression\n");};
inclusive_OR_expression : exclusive_OR_expression	{printf("inclusive_OR_expression : exclusive_OR_expression\n");}
			| inclusive_OR_expression OR exclusive_OR_expression
						{printf("inclusive_OR_expression : inclusive_OR_expression '|' exclusive_OR_expression\n");};
exclusive_OR_expression	: AND_expression	{printf("exclusive_OR_expression : AND_expression\n");}
			| exclusive_OR_expression CAP AND_expression	
						{printf("exclusive_OR_expression : exclusive_OR_expression ^ AND_expression\n");};
AND_expression		: equality_expression				{printf("AND_expression : equality_expression\n");}
			| AND_expression AND equality_expression	{printf("AND_expression : AND_expression & equality_expression\n");};
equality_expression	: relational_expression	{printf("equality_expression : relational_expression\n");}
			| equality_expression EQUAL_EQUAL relational_expression
						{printf("equality_expression : equality_expression == relational_expression\n");}
			| equality_expression NOT_EQUAL relational_expression
						{printf("equality_expression : equality_expression != relational_expression\n");};
relational_expression	: shift_expression	{printf("relational_expression : shift_expression\n");}
			| relational_expression LT shift_expression
						{printf("relational_expression : relational_expression < shift_expression\n");}
			| relational_expression GT shift_expression
						{printf("relational_expression : relational_expression > shift_expression\n");}
			| relational_expression LT_EQUAL shift_expression
						{printf("relational_expression : relational_expression >= shift_expression\n");}
			| relational_expression GT_EQUAL shift_expression	
						{printf("relational_expression : relational_expression <= shift_expression\n");};
shift_expression	: additive_expression	{printf("shift_expression : additive_expression\n");}
			| shift_expression LT_LT additive_expression
						{printf("shift_expression : shift_expression << additive_expression\n");}
			| shift_expression GT_GT additive_expression
						{printf("shift_expression : shift_expression >> additive_expression\n");};

additive_expression	: multiplicative_expression
						{printf("additive_expression : multiplicative_expression\n");}
			| additive_expression PLUS multiplicative_expression
						{printf("additive_expression : additive_expression + multiplicative_expression\n");}
			| additive_expression MINUS multiplicative_expression
						{printf("additive_expression : additive_expression - multiplicative_expression\n");};
multiplicative_expression
			: cast_expression	{printf("multiplicative_expression : cast_expression\n");}
			| multiplicative_expression STAR cast_expression
						{printf("multiplicative_expression : multiplicative_expression * cast_expression\n");}
			| multiplicative_expression DIVIDE cast_expression
						{printf("multiplicative_expression : multiplicative_expression \ .cast_expression\n");}
			| multiplicative_expression PERCENT cast_expression	
						{printf("multiplicative_expression : multiplicative_expression %% cast_expression\n");};
cast_expression		: unary_expression				{printf("cast_expression : unary_expression\n");};
unary_expression	: postfix_expression				{printf("unary_expression : postfix_expression\n");}
			| PLUS_PLUS unary_expression			{printf("unary_expression : ++ unary_expression\n");}
			| MINUS_MINUS unary_expression			{printf("unary_expression : -- unary_expression\n");}
			| unary_operator cast_expression		{printf("unary_expression : unary_operator cast_expression\n");};
unary_operator		: PLUS						{printf("unary_operator : +\n")}
			| MINUS						{printf("unary_operator : -\n")}
			| AND						{printf("unary_operator : &\n")}
			| STAR						{printf("unary_operator : *\n")};
postfix_expression	: primary_expression				{printf("postfix_expression : primary_expression\n");}
			| postfix_expression LSB expression RSB		{printf("postfix_expression : postfix_expression [ expression ]\n");}
			| postfix_expression LP argument_expression_list_opt RP
							{printf("postfix_expression : postfix_expression (arguement expression list)\n");}
			| postfix_expression DOT IDENTIFIER		{printf("postfix_expression : postfix_expression . IDENTIFIER\n");}	
			| postfix_expression MINUS_GT IDENTIFIER	{printf("postfix_expression : postfix_expression -> IDENTIFIER\n");}
			| postfix_expression PLUS_PLUS			{printf("postfix_expression : postfix_expression ++\n");}
			| postfix_expression MINUS_MINUS		{printf("postfix_expression : postfix_expression --\n");}
			| postfix_expression DOT_APOS			{printf("postfix_expression : postfix_expression ;\n");};
argument_expression_list_opt	:					{printf("argument_expression_list_opt : *empty*\n");}
				| argument_expression_list		{printf("argument_expression_list_opt : argument_expression_list\n");};
argument_expression_list	: assignment_expression	{printf("argument_expression_list : assignment_expression\n");}
				| argument_expression_list COMMA assignment_expression
							{printf("postfix_expression : postfix_expression (arguement expression list)\n");};
primary_expression	: IDENTIFIER			{printf("primary_expression : IDENTIFIER\n");}
			| CONSTANT			{printf("primary_expression : CONSTANT\n");}
			| STRING_LITERAL		{printf("primary_expression : STRING_LITERAL\n");}
			| LP expression RP		{printf("primary_expression : ( expression )\n");};

declaration		: declaration_specifiers init_declarator_list_opt SEMI_COLON
							{printf("declaration : declaration_specifiers init_declarator_list_opt ; \n");};
declaration_specifiers	: type_specifier declaration_specifiers_opt
							{printf("declaration_specifiers : type_specifier declaration_specifiers_opt\n");};
declaration_specifiers_opt	:				{printf("declaration_specifiers_opt : *empty*\n");}
				| declaration_specifiers	{printf("declaration_specifiers_opt : declaration_specifiers\n");};
init_declarator_list_opt:					{printf("init_declarator_list_opt : *empty*")}
			| init_declarator_list			{printf("init_declarator_list_opt : init_declarator_list")};
init_declarator_list	: init_declarator			{printf("init_declarator_list : init_declarator")}
			| init_declarator_list COMMA init_declarator
								{printf("init_declarator_list : init_declarator_list , init_declarator\n");};
init_declarator		: declarator				{printf("init_declarator : declarator\n");}
			| declarator EQUAL initializer		{printf("init_declarator : declarator = initializer\n");};
type_specifier		: VOID 					{printf("type_specifier : VOID\n");}
			| CHAR					{printf("type_specifier : CHAR\n");}
			| SHORT					{printf("type_specifier : SHORT\n");}
			| INT					{printf("type_specifier : INT\n");}
			| LONG					{printf("type_specifier : LONG\n");}
			| FLOAT					{printf("type_specifier : FLOAT\n");}
			| DOUBLE				{printf("type_specifier : DOUBLE\n");}
			| MATRIX				{printf("type_specifier : MATRIX\n");}
			| SIGNED				{printf("type_specifier : SIGNED\n");}
			| UNSIGNED				{printf("type_specifier : UNSIGNED\n");}
			| BOOL					{printf("type_specifier : BOOL\n");};

declarator		: pointer_opt direct_declarator		{printf("declarator : pointer_opt direct_declarator\n");};
direct_declarator	: IDENTIFIER				{printf("direct_declarator : IDENTIFIER\n");}
			| LP declarator RP			{printf("direct_declarator : ( declarator )\n");}
			| direct_declarator LSB assignment_expression_opt RSB
							{printf("direct_declarator : direct_declarator [ assignment_expression_opt ]\n");}
			| direct_declarator LP parameter_type_list RP
								{printf("direct_declarator : direct_declarator ( parameter_type_list )\n");}
			| direct_declarator LP identifier_list_opt RP	
								{printf("direct_declarator : direct_declarator ( identifier_list_opt )\n");};
assignment_expression_opt:					{printf("assignment_expression_opt\n");}
			| assignment_expression			{printf("assignment_expression_opt : assignment_expression\n");};
identifier_list_opt	:					{printf("identifier_list_opt : *empty*\n");}
			| identifier_list			{printf("identifier_list_opt : identifier_list\n");};
pointer_opt		:					{printf("pointer_opt : *empty*\n");}
			| pointer				{printf("pointer_opt : pointer\n");};
pointer			: STAR pointer_opt				{printf("pointer_opt : * pointer_opt\n");};
parameter_type_list	: parameter_list			{printf("parameter_type_list : parameter_list\n");};
parameter_list 		: parameter_declaration			{printf("parameter_list : parameter_declaration\n");}
			| parameter_list COMMA parameter_declaration
								{printf("parameter_list : parameter_list , parameter_declaration\n");};
parameter_declaration	: declaration_specifiers declarator	{printf("parameter_declaration : declaration_specifiers declarator\n");}
			| declaration_specifiers		{printf("parameter_declaration : declaration_specifiers\n");};
identifier_list		: IDENTIFIER				{printf("identifier_list : IDENTIFIER\n");}
			| identifier_list COMMA IDENTIFIER	{printf("identifier_list : identifier_list , IDENTIFIER\n");};	
initializer		: assignment_expression			{printf("initializer : assignment_expression\n");}
			| LCB initializer_row_list RCB		{printf("initializer : { initializer_row_list }\n");};
initializer_row_list	: initializer_row			{printf("initializer_row_list : initializer_row\n");}
			| initializer_row_list SEMI_COLON initializer_row
								{printf("initializer_row_list : initializer_row_list ; initializer_row\n");};
initializer_row		: designation_opt initializer		{printf("initializer_row : designation_opt initializer\n");}
			| initializer_row COMMA designation_opt initializer
								{printf("initializer_row : initializer_row , designation_opt initializer\n");};
designation_opt		:					{printf("designation_opt : *empty*\n");}
			| designation				{printf("designation_opt : designation\n");};
designation		: designator_list EQUAL			{printf("designation_opt : designator_list =\n");};
designator_list		: designator				{printf("designator_list : designator\n");}
			| designator_list designator		{printf("designator_list : designator_list designator\n");};
designator		: LSB constant_expression RSB		{printf("designator : [ constant_expression ]\n");}
			| DOT IDENTIFIER			{printf("designator : . IDENTIFIER\n");};

statement		: labeled_statement			{printf("statement : labeled_statement\n");}
			| compound_statement			{printf("statement : compound_statement\n");}
			| expression_statement			{printf("statement : expression_statement\n");}
			| selection_statement			{printf("statement : selection_statement\n");}
			| iteration_statement			{printf("statement : iteration_statement\n");}
			| jump_statement			{printf("statement : jump_statement\n");};

labeled_statement	: IDENTIFIER COLON statement		{printf("labeled_statement : IDENTIFIER : statement\n");}
			| CASE constant_expression COLON statement{printf("statement : CASE constant_expression : statement\n");}
			| DEFAULT COLON statement			{printf("statement : DEFAULT : statement\n");};
compound_statement	: LCB block_item_list_opt RCB		{printf("compound_statement : { block_item_list_opt }\n");};
block_item_list_opt	:					{printf("block_item_list_opt : *empty*\n");}
			| block_item_list			{printf("block_item_list_opt : block_item_list\n");};
block_item_list		: block_item				{printf("block_item_list : block_item\n");}
			| block_item_list block_item		{printf("block_item_list : block_item_list block_item\n");};
block_item		: declaration				{printf("block_item : declaration\n");}
			| statement				{printf("block_item : statement\n");};

expression_statement	: expression_opt SEMI_COLON			{printf("expression_statement : expression_opt ; \n");};
expression_opt		:					{printf("expression_opt : *empty*\n");}
			| expression				{printf("expression_opt : expression\n");};

selection_statement	: IF LP expression RP statement	{printf("selection_statement : IF ( expression ) statement\n");}
			| IF LP expression RP statement ELSE statement
								{printf("selection_statement : IF ( expression ) statement ELSE statement\n");}
			| SWITCH LP expression RP statement	{printf("selection_statement : SWITCH ( expression ) statement\n");};
iteration_statement	: WHILE LP expression RP statement	{printf("iteration_statement : WHILE ( expression ) statement\n");}
			| DO statement WHILE LP expression RP SEMI_COLON
					{printf("iteration_statement : DO statement WHILE ( expression ) ;\n");}
			| FOR LP expression_opt SEMI_COLON expression_opt SEMI_COLON expression_opt RP statement
					{printf("iteration_statement: FOR ( expression_opt ; expression_opt ; expression_opt )\n");}
			| FOR LP declaration expression_opt SEMI_COLON expression_opt RP statement
					{printf("iteration_statement: FOR ( declaration expression_opt ; expression_opt )\n");};

jump_statement		: GOTO IDENTIFIER SEMI_COLON			{printf("jump_statement : GOTO identifier ;\n");}
			| CONTINUE SEMI_COLON				{printf("jump_statement : CONTINUE ;\n");}
			| BREAK SEMI_COLON				{printf("jump_statement : BREAK ;\n");}
			| RETURN expression_opt SEMI_COLON		{printf("jump_statement : RETURN expression_opt ;\n");};

external_defination	: translation_unit			{printf("external_defination : translation_unit\n");};
translation_unit 	: external_declaration			{printf("translation_unit : external_declaration\n");}
			| translation_unit external_declaration	{printf("translation_unit : translation_unit external_declaration\n");};
external_declaration	: function_defination			{printf("external_declaration : function_definition\n");}
			| declaration				{printf("external_declaration : declaration\n");};
function_defination	: declaration_specifiers declarator declaration_list_opt compound_statement	
			{printf("function_definition : declaration_specifiers declarator declaration_list_opt compound_statement\n");};
declaration_list_opt	:				{printf("declaration_list_opt : *empty*\n");}
			| declaration_list		{printf("declaration_list_opt : declaration_list\n");};
declaration_list	: declaration 			{printf("declaration_list : declaration\n");}
			| declaration_list declaration 	{printf("declaration_list : declaration_list declaration\n");};
%%                     /* C code */


void yyerror(char *s){
  printf("\nERROR %s at %s",s,yytext);
}
