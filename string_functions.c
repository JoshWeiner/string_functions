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

char * string_ncopy(char * dest, char*source, int n){
  while (n) {
    *(dest + n) = *(source + n);
    n --;
  }
  return dest;
}

int string_comp( char* s1, char* s1 ){
  while(*s1 && *s2){
    if(*s1 != *s2){
      return (*s1 - *s2);
    }
    s1++;
    s2++;
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
  
  printf("\n Testing string_ncopy(s1) function: \n");
  printf("System's copy of |%s| and |%s|  : %s \n",s1, s2, strncpy(s1, s2, 4));
  printf("My copy of |%s| and |%s| : %s \n",s1, s2, string_ncopy(s1, s2, 4));
  
}
