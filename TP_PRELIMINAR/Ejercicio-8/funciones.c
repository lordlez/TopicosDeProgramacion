#include "header.h"

int producto_sumas_sucesivas(int numero1, int numero2){
    int i, suma = 0;
    for(i=0; i<numero2; i++){
        suma += numero1;
    }
    return suma;
}


