#include "header.h"

void insertarPorPosicion(int vec[], int ce, int numero, int posicion)
{
    int i;
    for(i = 0; i<ce; i++)
    {
        if(i == (posicion-1))
        {
            vec[i] = numero;
        }
    }
}


void mostrarVector(int vec[], int ce)
{
    int i;
    for(i=0; i<ce; i++)
    {
        printf("%d\n", vec[i]);
    }
}

