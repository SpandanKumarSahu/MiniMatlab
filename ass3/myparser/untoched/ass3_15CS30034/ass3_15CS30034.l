%{
#include "ass3_15CS30034.tab.c"
%}

%option noyywrap

Identifier [a-zA-Z_][a-zA-Z0-9_]*
Integer_Constant [1-9][0-9]*
Zero_Constant 0
Digit_Sequence [0-9]+
Sign [+-]
Exponential_Part [eE]{Sign}?{Digit_Sequence}
Fraction_Constant {Digit_Sequence}?"."{Digit_Sequence}|{Digit_Sequence}"."
Floating_Constant {Fraction_Constant}{Exponential_Part}?|{Digit_Sequence}{Exponential_Part}
C_Char [^\"\'\\\n]|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"|"\\\'"|"\\\""|"\\\?"|"\\\\" 
C_Char_Sequence {C_Char}+	
Character_Constant [']{C_Char_Sequence}[']
String_Literal ["]{C_Char_Sequence}?["]
 
Punctuator [{}\[\]().&*+-/~!/%<>^|?:;=,#]

%x SingleComment
%x MultipleComment

%%

"//" {BEGIN(SingleComment);}
<SingleComment>[^\n]* ;
<SingleComment>"\n" BEGIN(INITIAL);

"/*" BEGIN(MultipleComment);
<MultipleComment>[^*]* ;
<MultipleComment>"*"[^*/]* ;
<MultipleComment>"*/" BEGIN(INITIAL);

"unsigned" return UNSIGNED;
"break" return BREAK;
"case" return CASE;
"float" return FLOAT;
"for" return FOR;
"signed" return SIGNED;
"Bool" return BOOL;
"continue" return CONTINUE;
"do" return DO;
"int" return INT;
"long" return LONG; 
"else" return ELSE;
"return" return RETURN;
"void" return VOID;
"short" return SHORT;
"char" return CHAR;
"while" return WHILE;
"goto" return GOTO;
"if" return IF;

"default" return DEFAULT;
"switch" return SWITCH;
"double" return DOUBLE;
"Matrix" return MATRIX;
{Identifier} return identifier;
{Integer_Constant}|{Floating_Constant}|{Character_Constant}|{Zero_Constant} return constant;
{String_Literal} return string_literal;

".'" return trans_op;
"->" return arrow_op;
"++" return inc_op;
"--" return dec_op;
"<<" return ls_op;
">>" return rs_op;
"<=" return le_op;
">=" return ge_op;
"==" return ee_op;
"!=" return ne_op;
"||" return or_op;
"&&" return and_op;

"*=" return star_equal;
"/=" return divide_equal;
"%=" return mod_equal;
"+=" return plus_equal;
"-=" return minus_equal;
"<<=" return ls_equal;
">>=" return rs_equal;
"&=" return and_equal;
"^=" return xor_equal;
"|=" return or_equal;

{Punctuator} {return yytext[0];}

[ \t]* ;

. {printf("Unrecognized token [%s]\n",yytext);exit(1);}
%%
