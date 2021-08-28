#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {

    char texto[100];

  // ENTRADA DE DADOS
  fgets(texto, 100, stdin);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO

  numero_vogais (texto);

  return(0);
}