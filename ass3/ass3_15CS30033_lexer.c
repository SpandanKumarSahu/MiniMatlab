#include <stdio.h>
#include "myscanner.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

int main(void) 
{
  int ntoken, vtoken;
  ntoken = yylex();
  while(ntoken) {
    printf("%s\t", yytext);
    switch(ntoken){
    case IDENTIFIER:
      printf("IDENTIFIER\n");
      break;
    case CONSTANT:
      printf("CONSTANT\n");
      break;
    case STRING_LITERAL:
      printf("STRING_LITERAL\n");
      break;
    case PUNCTUATORS:
      printf("PUNCTUATORS\n");
      break;
    default:
      if(ntoken >= UNSIGNED && ntoken <= MATRIX)
	printf("%d\n", ntoken);
      else
	printf("Syntax error in line %d\n",yylineno);
    }
    ntoken = yylex();		  
  }
  return 0;
}
