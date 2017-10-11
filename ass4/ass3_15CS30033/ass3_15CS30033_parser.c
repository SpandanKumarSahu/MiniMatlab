#include "lex.yy.c"
int main()
{
  int r = yyparse();
  switch(r){
  case 2:
    printf("memory overflow");
    break;
  case 1:
    printf("parsing error");
    break;
  case 0:
    printf("Successful");
    break;
  default:
    break;
  }
  return 0;
}
