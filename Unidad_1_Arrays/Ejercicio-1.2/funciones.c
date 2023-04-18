#include "header.h"

int insertar_en_orden(int *vec, int *ce, int valor)
{
    int *fin = vec+(*ce-1);

    if(*ce == TAM)
        return FALSO;

    while(vec<=fin && valor>*vec)
        vec++;

    *(fin+1) = *fin;

    while(vec<fin)
    {
        *fin = *vec;
        fin--;
    }

    *vec = valor;
    (*ce)++;

    return VERDADERO;
}




void mostrar_vector(int *vec, int *ce)
{
    int i;
    for(i=0; i<*ce; i++)
    {
        printf("%d | ", *vec);
        vec++;
    }
}
