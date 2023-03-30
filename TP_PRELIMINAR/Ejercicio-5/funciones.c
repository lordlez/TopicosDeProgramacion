#include "header.h"

void esta_en_fibo(int numero){
    int x=0, y=1, z=1;
    while(numero != z && numero > z){
        z = x+y;
        x = y;
        y = z;
    }
    if(numero == z){
        printf("El numero %d esta en la serie Fibonacci", numero);
    }else{
        printf("El numero %d no esta en la serie Fibonacci", numero);
    }
}




