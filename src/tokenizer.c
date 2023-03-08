#include <stdlib.h>
#include <stdio.h>
#include "tokenizer.h"

int space_char(char c){
  if(c == '\t' || c == ' ')
    return 1;
  else
    return 0;
}

int non_space_char(char c){
  if(c != '\t' || c != ' ')
    return 1;
  else
    return 0;
}

char *token_start(char *str){
  while(space_char(*str)){
      if(*str = '\0'){
	return str;
    }
    str++;
    }
  return str;
  
}

char *token_terminator(char *token){
  if(space_char(*token)){
    return token;
  }
  else{
    while(non_space_char(*token)){
      token++;
    }
    return token;
  }
}

int count_tokens(char *str){
  int count = 0;
  if(*str == '\0'){
    return 0;
  }
  while(*str++){
    if(space_char(*str)){
      count++;
    }
  }
  return count;
}

char *copy_str(char *instr,short len){
  char *copy = malloc((len+1) * sizeof(char));
  for(int i = 0; i <= len;i++){
    copy[i] = instr[i];
  }
  return copy;
}
char **tokenize(char *str){
  int count = count_tokens(str);
  char **tokens = malloc((count+1) * sizeof(char*));
  char *temp;
  for(int i = 0;i <= count; i++){
    temp = token_start(str);
    tokens[i] = copy_str(temp, (token_terminator(temp) - token_start(temp)));
    temp = token_terminator(str);
  }
  return tokens;
}
void print_tokens(char **tokens){
  int size = sizeof(tokens);
  for(int i = 0; i <= size; i++){
    printf("%p",tokens[i]);
  }
}
void free_tokens(char **tokens){
  
}

				      
