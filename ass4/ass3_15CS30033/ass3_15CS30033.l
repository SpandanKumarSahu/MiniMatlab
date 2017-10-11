%{
#include "y.tab.c"
%}
%option noyywrap

%%
("//".*)			;
("/*"[^*]*"*/")			;
(\ |\t|\n)*			;

"unsigned"			{return UNSIGNED;}
"if"				   {return IF;}
"break"				   {return BREAK;}
"case"				   {return CASE;}
"float"				   {return FLOAT;}
"for"				   {return FOR;}
"signed"			{return SIGNED;}
"Bool"				   {return BOOL;}
"continue"			{return CONTINUE;}
"do"				   {return DO;}
"int"				   {return INT;}
"long"				   {return LONG;}
"else"				   {return ELSE;}
"return"			{return RETURN;}
"void"				   {return VOID;}
"char"				   {return CHAR;}
"short"				   {return SHORT;}
"while"				   {return WHILE;}
"goto"				   {return GOTO;}
"default"			{return DEFAULT;}
"switch"			{return SWITCH;}
"double"			{return DOUBLE;}
"Matrix"			{return MATRIX;}

[_a-zA-Z][_a-zA-Z0-9]*	{return IDENTIFIER;}

-?([1-9][0-9]*)		{return CONSTANT;}
0			{return CONSTANT;}
-?([0-9]+([eE][-+]?[0-9]+))		{return CONSTANT;}
-?([0-9]*\.[0-9]*([eE][-+]?[0-9]+)?)	{return CONSTANT;}
(\'([^*])*\')	{return CONSTANT;}

(\"(\\.|[^"'\\])*\")				{return STRING_LITERAL;}


"+"		{return PLUS;}
"-"		{return MINUS;}
"*"		{return STAR;}
"/"		{return DIVIDE;}
">"		{return GT;}
"<"		{return LT;}
"&"		{return AND;}
"|"		{return OR;}
"^"		{return CAP;}
"\."		{return DOT;}
";"		{return SEMI_COLON;}
"["		{return LSB;}
"]"		{return RSB;}
"{"		{return LCB;}
"}"		{return RCB;}
"("		{return LP;}
")"		{return RP;}
","		{return COMMA;}
"="		{return EQUAL;}
"?"		{return QUESTION;}
"!"		{return NOT;}
":"		{return COLON;}
"'"		{return APOS;}
"*="		{return STAR_EQUAL;}
"/="		{return DIVIDE_EQUAL;}
"%="		{return PERCENT_EQUAL;}
"+="		{return PLUS_EQUAL;}
"-="		{return MINUS_EQUAL;}
"<<="		{return LT_LT_EQUAL;}
">>="		{return GT_GT_EQUAL;}
"&="		{return AND_EQUAL;}
"^="		{return CAP_EQUAL;}
"|="		{return OR_EQUAL;}
"||"		{return OR_OR;}
"&&"		{return AND_AND;}
"=="		{return EQUAL_EQUAL;}
"!="		{return NOT_EQUAL;}
"<="		{return LT_EQUAL;}
">="		{return GT_EQUAL;}
"<<"		{return LT_LT;}
">>"		{return GT_GT;}
"++"		{return PLUS_PLUS;}
"--"		{return MINUS_MINUS;}
"->"		{return MINUS_GT;}
".'"		{return DOT_APOS;}
%%


