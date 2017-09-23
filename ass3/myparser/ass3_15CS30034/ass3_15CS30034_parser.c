#include "lex.yy.c"
int main()
{
	int status=yyparse();
	if(status==2)
		printf("\nmemory overflow\n");
	if(status==1)
		printf("\nparsing error\n");
	if(status==0)
		printf("\nSuccessful\n");
	return 0;
}
