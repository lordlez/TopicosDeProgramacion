#include "header.h"

void insertarPorPosicion(int vec[], int tam, int numero, int posicion)
{
    int i;
    for(i = 0; i<tam; i++)
    {
        if(i == (posicion-1))
        {
            vec[i] = numero;
        }
    }
}


void mostrarVector(int vec[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d\n", vec[i]);
    }
}

