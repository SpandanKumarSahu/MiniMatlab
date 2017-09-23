#include "lex.yy.c"
int main()
{
	int token;
	while(token=yylex())
	{
		if(token==identifier)
			printf("Identifier\t%s\n",yytext);
		else if(token==constant)
			printf("Constant\t%s\n",yytext);
		else if(token==string_literal)
			printf("String literal\t%s\n",yytext);
		else if(token<=256 || (token>=arrow_op && token<=or_equal))
			printf("Punctuator\t%s\n",yytext);
		else if(token>=VOID && token<=RETURN)
			printf("Keyword\t\t%s\n",yytext);
	}
	return 0;
}
