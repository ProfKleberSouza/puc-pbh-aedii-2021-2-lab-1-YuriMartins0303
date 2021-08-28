#include <stdio.h>
#include "functions.h"

int main() {

    int v[1000];
    int n,m;
  // ENTRADA DE DADOS
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
  scanf("%d", &v[i]);
  }
  // PROCESSAMENTO - EXECUTANDO A FUNCAO

  m = Menor(v, n);
  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d", m);

  return(0);
}