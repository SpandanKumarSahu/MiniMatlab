%{
#include <stdio.h>
#include <stdlib.h>
#include "myscanner.h"
%}
%%

("//".*)			;
("/*"[^*]*"*/")			;
(\ |\t|\n)*			;

"unsigned"				{return UNSIGNED;}
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

("["|"{"|"}"|"]"|"("|")"|"|")		{return PUNCTUATORS;}
("[]"|"\(\)"|"\."|"->")		{return PUNCTUATORS;}
("++"|"--"|"&"|"*"|"+"|"-"|"~"|"!")	{return PUNCTUATORS;}
("/"|"%"|"<<"|">>"|">"|"<"|"<="|">="|"=="|"!="|"^"|"&&"|"||"|"?"|":"|";") {return PUNCTUATORS;}
("="|"*="|"/="|"+="|"-="|"%="|"<<="|">>="|"&="|"^="|"^="|"|="|","|"#"|"!")	{return PUNCTUATORS;}
%%
int yywrap (void) {return 1;}

