#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void  numero_vogais ( char texto [100]){
  int tam = strlen(texto);
  int cont1 =0, cont2=0, cont3=0, cont4=0, cont5=0;
  for(int i=0; i < tam; i++){
    if(texto[i] == 'a' || texto[i] == 'A'){
      cont1++;
    }
    else if(texto[i] == 'e' ||  texto[i] == 'E'){
      cont2++;
    }
    else if(texto[i] == 'i' ||  texto[i] == 'I'){
      cont3++;
    }
    else if(texto[i] == 'o' || texto[i] == 'O'){
      cont4++;
    }
    else if(texto[i] == 'u' || texto[i] == 'U'){
      cont5++;
    }

  }

  printf("A = %d\n", cont1);
  printf("E = %d\n", cont2);
  printf("I = %d\n", cont3);
  printf("O = %d\n", cont4);
  printf("U = %d\n", cont5);


}