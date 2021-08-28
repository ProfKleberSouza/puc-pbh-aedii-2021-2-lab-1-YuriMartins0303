#include <stdio.h>
#include <string.h>
#include "functions.h"

int main() {
    char texto[100];
    int p;
   fgets(texto, 100, stdin);
  
  p = palindromo(texto);

if(p == 1){
  printf("SIM");
}else{
  printf("NAO");
}

  return(0);
}