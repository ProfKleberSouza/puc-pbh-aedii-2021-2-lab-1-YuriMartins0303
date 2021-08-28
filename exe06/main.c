#include <stdio.h>
#include "functions.h"

int main() {

    int x;
    int n;
    int result;

  // ENTRADA DE DADOS
  scanf("%d", &x);
  scanf("%d", &n);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  result = potencia(x,n);
  printf("%d",result);


  return(0);
}