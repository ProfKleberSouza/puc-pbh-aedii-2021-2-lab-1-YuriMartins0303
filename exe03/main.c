#include <stdio.h>
#include "functions.h"

int main() {

    int v[1000];
    int n;
    int maior;
    int menor;
  // ENTRADA DE DADOS
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
  scanf("%d", &v[i]);
  }
  // PROCESSAMENTO - EXECUTANDO A FUNCAO

  Menor_Maior(v, n, &menor, &maior);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d", maior);


  return(0);
}