#include "stdio.h"
#include "stdlib.h"
#include "tokenizer.h"

int main(){
  char str[100];
  char *temp;
  printf( "> " );
  scanf("%s", str);
  printf("%s", str);
  printf("\n");
  temp = str;
  print_tokens(tokenize(temp));
  
  return 0;

}
