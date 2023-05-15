#include "header.h"

void intercambiar(int *num1, int *num2)
{
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}


