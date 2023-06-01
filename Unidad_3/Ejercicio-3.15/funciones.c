#include "header.h"

void intercambio_generico(void *dato1, void *dato2, size_t tam)
{
    int i;
    char aux;
    char *e1 = dato1;
    char *e2 = dato2;

    for(i=0; i<tam; i++)
    {
        aux = *e1;
        *e1 = *e2;
        *e2 = aux;
        e1++;
        e2++;
    }
}

