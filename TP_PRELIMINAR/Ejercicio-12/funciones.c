#include "header.h"

int numeos_pares_menores_que(int numero){
    int i, suma = 0;
    for(i=2; i<numero; i+=2){
        suma += i;
    }
    return suma;
}


