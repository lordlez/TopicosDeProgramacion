#include "header.h"

void eliminar_repetido(int *vec, int *ce, int valor)
{
    int *fin = vec+(*ce-1);
    while(*vec != valor)
    {
        vec++;
    }

    while(vec <= fin)
    {
        *vec = *(vec+1);
        vec++;
    }
    (*ce)--;
}


void mostrar_vector(int *vec, int *ce)
{
    int i;
    for(i=0; i < *ce; i++)
    {
        printf("%d | ", *vec);
        vec++;
    }
}


