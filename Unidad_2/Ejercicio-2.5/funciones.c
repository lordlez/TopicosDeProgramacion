#include "header.h"

void *mi_memmove(void *destino, const void *origen, size_t n)
{
    int i;
    char aux[n];

    for(i=0;i<n;i++)
    {
        aux[i] = *(char*)origen;
        origen++;
    }

    for(i=0;i<n;i++)
    {
        *(char*)destino = aux[i];
        destino++;
    }

    return destino;
}


