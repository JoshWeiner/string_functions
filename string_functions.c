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
    *(dest) = *(source);
    n --;
  }
  return dest;
}

char* string_cat(char *dest, char *source){
  char * temp = dest;
  while (*dest) {
    dest ++;
  }
  while(* source){
    *dest = * source;
    source++;
  }
  *dest = 0; //append terminating null
  return temp;


}

int string_comp( char * s1, char * s2 ){
  while(*s1 && *s2){
    if(*s1 != *s2){
      return (*s1 - *s2);
    }
    s1 ++;
    s2 ++;
  }
  return 0;
}

char * string_chr( char *s1, char c){
  while (*s1) {
    if (*s1 == c) {
      return s1;
    }
    s1++;
  }
  return 0;
}

int main(){
  //printf(" \n S1: [Talos guide you.] \n S2: [PSI Rockin OMEGA] \n S3: [Galileo & Figaro] \n");
  //System's functions:
  char uno[] = "charizard";
  char dos[] = "pikachu";
  char tres[] = "squirtle";

  printf("\n Testing string_len(uno) function: \n");
  printf("System's length of |%s| : %d \n",uno, strlen(uno));
  printf("My length of |%s| : %d \n",uno, string_len(uno));

  printf("\n Testing string_ncopy(uno, dos, 4) function: \n");
  printf("System's copy of |%s| and |%s| at 4 : %s \n",uno, dos, strncpy(uno, dos, 4));
  printf("My copy of |%s| and |%s| at 4 : %s \n",uno, dos, string_ncopy(uno, dos, 4));

  char one[] = "charizard";
  char two[] = "pikachu";
  char three[] = "squirtle";
  char cuatro[20] = "pikachu";
  char cinco[20] = "squirtle";
  
  printf("\n Testing string_cat(dos, tres) function: \n");
  printf("System's cat of |%s| and |%s|  : %s \n", cuatro, cinco, strcat(cuatro, cinco) );
  printf("My copy of |%s| and |%s| : %s \n",cuatro, cinco, string_cat(cuatro, cinco) );

  printf("\n Testing string_chr(uno, 4) function: \n");
  printf("System's chr of |%s| for 'a' : %s \n", one, strchr(one, 'a') );
  printf("My chr of |%s| for 'a' : %s \n",one, string_chr(one, 'a') );

}
