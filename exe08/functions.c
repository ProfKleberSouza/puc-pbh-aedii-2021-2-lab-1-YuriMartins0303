#include "functions.h"
#include <string.h>
#include <stdio.h>

int palindromo ( char texto []){

  int tamanho;
  int tam; 
  int j =0;
  tamanho = strlen(texto);
  tam = strlen(texto)-1;
  teste(texto, tam, tamanho, j);

}

int teste(char txt[], int tam, int tamanho, int j){ 
  if(j <= tam){
  if(txt[j] == txt[tam]){

    tam--;
    j++;
    teste(txt, tam, tamanho, j);

    }else{
      return 0;
    }
    return 1;
  }
}