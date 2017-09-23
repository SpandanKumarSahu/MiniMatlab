#include "lex.yy.c"
int main()
{
	int status=yyparse();
	if(status==2)
		printf("memory overflow");
	if(status==1)
		printf("parsing error");
	if(status==0)
		printf("Successful");
	return 0;
}
