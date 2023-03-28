#include "header.h"

int combinatorio(int numero1, int numero2){
    int combi;
    combi = factorial(numero1) / (factorial(numero2) * factorial(numero1-numero2));
    return combi;
}


int factorial(int numero){
    int i, fact = 1;
    for(i=numero; i>1; i--)
        fact *= i;
    return fact;
}




