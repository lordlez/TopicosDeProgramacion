#include "header.h"

void perfecto_deficiente_abundante(int numero){
    int i, suma=0;
    for(i=1; i<numero; i++){
        if(numero % i == 0){
            suma += i;
        }
    }
    if(suma == numero){
        printf("El numero %d es perfecto", numero);
    }else if(suma < numero){
        printf("El numero %d es deficiente", numero);
    }else{
        printf("El numero %d es abundante", numero);
    }
}



