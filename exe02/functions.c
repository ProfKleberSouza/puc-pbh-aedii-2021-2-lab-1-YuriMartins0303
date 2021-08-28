#include "functions.h"

int Menor(int v[], int n){
    int menor= v[0];

    for(int i = 0; i < n; i++){
      if(menor > v[i]){
        menor = v[i];
      }
    }

    return menor;
}