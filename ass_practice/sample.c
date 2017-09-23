#include <stdio.h>

int main(){
  int a = 7;
  if ( a > 8)
    printf("Hello\n");
  else
    printf("World\n");
  for(int i = 0; i<a; i++)
    printf("Hello\n");
  while(a){
    printf("World\n");
    a--;
  }
  return 0;
}
