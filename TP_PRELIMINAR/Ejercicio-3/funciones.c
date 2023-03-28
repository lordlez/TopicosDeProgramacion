#include "header.h"

float ex(int numero, float tol){
    float termino = 1, total = 0;
    int i = 1;
    while(termino > tol){
        termino = potencia_a_la(numero, i) / factorial(i);
        total += termino;
        i++;
    }
    return total+1;
}


int factorial(int numero){
    int fact = 1, i;
    for(i=numero; i>1; i--)
        fact *= i;
    return fact;
}


int potencia_a_la(int numero, int potencia){
    int i, pot=1;
    for(i=0; i<potencia; i++){
        pot *= numero;
    }
    return pot;
}

