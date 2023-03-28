#include "header.h"

int factorial(int numero){
    int i, fact = 1;
    for(i=numero;i>1;i--)
        fact *= i;
    return fact;
}


