#include "header.h"

void es_natural_primo(int numero){
    int i, contador = 0;
    for(i=2; i<numero; i++){
        if(numero % i == 0){
            contador++;
        }
    }
    if(contador == 0){
        printf("El numero natural %d es primo", numero);
    }else{
        printf("El numero natural %d no es primo", numero);
    }
}


