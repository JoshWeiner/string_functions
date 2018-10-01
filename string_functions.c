#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "string_functions.h"

int string_len(char string[]){
  int i = 0;
  int ans = 0;
  while (string[i] != 0){
    i++;
    ans++;
  }
  return ans;
}

int main(){
  //System's functions:
  char charizard[] = "Talos guide you.";
  int length = strlen(charizard);
  printf("System's length of |%s| : %d \n",charizard,length);
  int my_length = string_len(charizard);
  printf("My length of |%s| : %d \n",charizard,length);
}
