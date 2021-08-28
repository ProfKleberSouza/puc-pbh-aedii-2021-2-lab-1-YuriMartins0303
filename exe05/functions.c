#include "functions.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void  inverte ( char texto [100]){
    char txt[100];
    int tam = strlen(texto);
    int i;
  for(i = 0; i < 100; i++){
    txt[i] = '\0'; 
  }
  for(i = 0; i < tam; i++){
    txt[(tam-i-1)] = texto[i];
  }

    printf("%s", txt);
}