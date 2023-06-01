#include "header.h"

void insertar_orden_generico(void *vec, int *cantE, size_t tamE, void *valor, int(*comparar)(const void *, const void *))
{
    int pos = 0;

    while(pos < *cantE && comparar(valor, vec+(pos*tamE))>0)
    {
        pos++;
    }

    memmove(vec+(pos+1)*tamE,vec+pos*tamE,((*cantE)-pos)*tamE);

    memcpy(vec+pos*tamE, valor, tamE);

    (*cantE)++;
}

int comparar_enteros(const void *e1, const void *e2)
{
    int *numero1 = (int*)e1;
    int *numero2 = (int*)e2;

    return *numero1-*numero2;
}

void mostrar_generico(void *vec, size_t cantE, size_t tamE, void (*mostrar)(void *))
{
    int i;
    for(i=0; i<cantE; i++)
    {
        mostrar(vec);
        vec+=tamE;
    }
}

void mostrar_enteros(void *vec)
{
    int *ve = (int*)vec;
    printf("\n%d", *ve);
}








