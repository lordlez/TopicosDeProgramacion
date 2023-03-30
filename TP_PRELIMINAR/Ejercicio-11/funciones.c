#include "header.h"

int suma_primeros_pares(int numero){
    int suma = 0, i = 2;
    for(i=2; i<=2*numero; i+=2){
        suma += i;
    }
    return suma;
}



