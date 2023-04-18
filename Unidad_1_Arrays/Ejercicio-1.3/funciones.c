#include "header.h"

void eliminar_vector_posicion(int *vec, int *ce, int pos)
{
    int *posicion = vec+(pos-1);
    int *fin = vec+(*ce-1);

    while(vec!=posicion)
    {
        vec++;
    }

    while(vec<fin)
    {
        *vec=*(vec+1);
        vec++;
    }
    (*ce)--;
}


void mostrar_vector(int *vec, int *ce)
{
    int i;
    for(i = 0; i < *ce; i++)
    {
        printf("%d | ", *vec);
        vec++;
    }
}


