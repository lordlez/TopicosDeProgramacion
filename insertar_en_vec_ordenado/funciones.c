#include "header.h"

void insertar_en_orden_generico(void *vec, int *ce, size_t tamE, void *valor, int(*cmp)(const void *, const void *))
{
    int pos=0;

    while(pos<*ce && cmp(valor, vec+(pos*tamE))>0)
    {
        pos++;
    }

    mi_memmove(vec+(pos+1)*tamE, vec+pos*tamE, ((*ce)-pos)*tamE);
    mi_memcpy(vec+pos*tamE, valor, tamE);

    (*ce)++;
}


void *mi_memcpy(void *s1, const void *s2, size_t n)
{
    char *e1 = (char*)s1;
    char *e2 = (char*)s2;
    int i;

    for(i=0;i<n;i++)
    {
        *e1 = *e2;
        e1++;
        e2++;
    }
    return e1;
}

void *mi_memmove(void *s1, const void *s2, size_t n)
{
    int i;
    char *e1 = (char*)s1;
    char *e2 = (char*)s2;
    //char aux[n];
    char *aux;
    aux = (char*)malloc(n);

    for(i=0;i<n;i++)
    {
        aux[i] = *e2;
        e2++;
    }

    for(i=0;i<n;i++)
    {
        *e1 = aux[i];
        e1++;
    }
    free(aux);
    return e1;
}


int comparar_enteros(const void *e1, const void *e2)
{
    int *ent1 = (int*)e1;
    int *ent2 = (int*)e2;
    return *ent1-*ent2;
}

void mostrar_vector(void *vec, size_t ce, size_t tamE, void (*mostrar)(void *))
{
    int i;
    for(i=0;i<ce;i++)
    {
        mostrar(vec);
        vec+=tamE;
    }
}


void mostrar_entero(void *dato)
{
    int *ent = (int*)dato;
    printf("%d ", *ent);
}

