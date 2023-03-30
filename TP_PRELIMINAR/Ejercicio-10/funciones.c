#include "header.h"

int suma_primeros_naturales(int numero){
    int i, suma = 0;
    for(i=1; i<=numero; i++){
        suma += i;
    }
    return suma;
}

