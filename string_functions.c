#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "string_functions.h"

int string_len(char* string){
  int ans = 0;
  while (*string){
    string++;
    ans++;
  }
  return ans;
}

char * stringn_copy(char* dest, char*source){
  return 0;
}
  
int main(){
  printf(" \n S1: [Talos guide you.] \n S2: [PSI Rockin OMEGA] \n S3: [Galileo & Figaro] \n");
  //System's functions:
  printf("\n Testing string_len(s1) function: \n");
  char charizard[] = "Talos guide you.";
  int length = strlen(charizard);
  printf("System's length of |%s| : %d \n",charizard,length);
  int my_length = string_len(charizard);
  printf("My length of |%s| : %d \n",charizard,length);
}
