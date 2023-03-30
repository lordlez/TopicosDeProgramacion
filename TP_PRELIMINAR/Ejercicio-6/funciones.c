#include "header.h"

float sen(int numero, float tol){
    int i = 3, signo = -1;
    float termi = 1, total = numero;
    while(fabs(termi) > tol){
        termi = signo*(pow(numero, i) / factorial(i));
        total += termi;
        signo *= -1;
        i+=2;
    }
    return total;
}

// revisar la funcion elevado_a_la
int elevado_a_la(int numero, int potencia){
    int i, pot=numero;
    for(i=1; i<potencia; i++){
        pot *= numero;
    }
    return pot;
}


int factorial(int numero){
    int i, fact = 1;
    for(i=numero; i>1; i--)
        fact *= i;
    return fact;
}
