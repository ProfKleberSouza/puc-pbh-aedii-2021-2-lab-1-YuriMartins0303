#include "functions.h"

void Menor_Maior(int v[], int n, int *menor,int *maior){
  *menor = v[0];
  *maior = v[1];

    for(int i = 0; i < n; i++){
      if(*menor > v[i]){
        *menor = v[i];
      }
      if(*maior < v[i]){
        *maior = v[i];
      }
    }

}