#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "functions.h"

int main() {

    int x, y;
    int result;
  // ENTRADA DE DADOS
  scanf("%d", &x);
  scanf("%d", &y);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  result = mdc(x, y);
  // SAIDA - IMPRIMINDO O RESULTADO

  printf("MDC = %d", result);
  return(0);
}