#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "string_functions.h"

int string_len(char* str){
  int ans = 0;
  while (*str){
    str++;
    ans++;
  }
  return ans;
}

char * stringn_copy(char* dest, char*source){
  return 0;
}

int string_comp( char* str1, char* str2 ){
  while(*str1 && *str2){
    if(*str1 != *str2){
      return (*str1 - *str2);
    }
    str1++;
    str2++;
  }
  return 0;
}
  
int main(){
  //printf(" \n S1: [Talos guide you.] \n S2: [PSI Rockin OMEGA] \n S3: [Galileo & Figaro] \n");
  //System's functions:
  char s1[] = "charizard";
  char s2[] = "pikachu";
  char s3[] = "squirtle";
  
  printf("\n Testing string_len(s1) function: \n");
  printf("System's length of |%s| : %d \n",s1, strlen(s1));
  printf("My length of |%s| : %d \n",s1, string_len(s1));
}
