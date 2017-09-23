#include "lex.yy.c"

int main(){
  int token;
  while(token = yylex()){
    switch(token){
    case IDENTIFIER:
      printf("<IDENTIFIER>\n");
      break;
    case CONSTANT:
      printf("<CONSTANT>\n");
      break;
    case STRING_LITERAL:
      printf("<STRING_LITERAL>\n");
      break;
    default:
      if(token < 256 || (token >= PLUS && token <= PLUS_EQUAL))
	printf("<PUNCTUATOR>\n");
      else if(token >= UNSIGNED && token <= MATRIX)
	printf("<KEYWORD>\n");
    }
  }
  return 0;
}
