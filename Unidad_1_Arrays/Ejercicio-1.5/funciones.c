#include "header.h"

void eliminar_repetidos(int *vec, int *ce, int eliminar)
{
    int *i,*j;
    i = vec;

    //mientras no llegue al final del vector
    while(i < vec+(*ce))
    {
        //si encuentro el valor a eliminar
        if(*i == eliminar)
        {
            j = i+1;
            while(j < vec+(*ce))
            {
                *(j-1) = *j;
                j++;
            }
            (*ce)--;
        }else
        {
            i++;
        }
    }
}


void mostrar_vector(int *vec, int *ce)
{
    int i;
    for(i=0;i<*ce;i++)
    {
        printf("%d | ", *vec);
        vec++;
    }
}

