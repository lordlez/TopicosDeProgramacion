#include "header.h"

int *direccion_elemento(int *vec, int ce, int elemento)
{
    int *direccion;
    int *fin = vec+(ce-1);
    while(vec<=fin)
    {
        if(elemento == *vec)
        {
            direccion = vec;
            return direccion;
        }
        vec++;
    }

    return NULL;
}


