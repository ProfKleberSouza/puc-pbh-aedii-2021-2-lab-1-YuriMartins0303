#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void tabela_verdade(int d){
  char tabela[1000];
  tabela_verdade_rec(tabela, d, 0);
}

void tabela_verdade_rec(char tabela[], int d, int pos){
  if(d == 0){
    tabela[pos] = '\0';
    printf("%s\n", tabela);
  }else{
      tabela[pos] = '0';
      tabela_verdade_rec(tabela, d-1, pos+1);
      tabela[pos] = '1';
      tabela_verdade_rec(tabela, d-1, pos+1);
  }
}