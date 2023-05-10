#include "header.h"

void ordenar_burbujeo(void *vec, size_t ce, size_t tam, int(*cmp)(const void*, const void*))
{
    void *fin = vec+(ce-1)*tam;
    void *lee = vec+tam;

    while(vec < fin)
    {
        while(lee <= fin)
        {
            if(cmp(lee, vec) < 0)
            {
                intercambiar(lee, vec, tam);
            }
            lee+=tam;
        }
        vec+=tam;
        lee = vec+tam;
    }
}


int comparar_enteros(const void *e1, const void *e2)
{
    const int *ent1 = (const int*)e1;
    const int *ent2 = (const int*)e2;
    return *ent1-*ent2;
}



void intercambiar(void *e1, void *e2, size_t tam)
{
    char aux[1000];
    memcpy(aux, e1, tam);
    memcpy(e1, e2, tam);
    memcpy(e2,aux,tam);
}


void mostrar_vector(void *vec, size_t ce, size_t tam, void(*mostrar)(void*))
{
    int i;
    for(i=0; i<ce; i++)
    {
        mostrar(vec);
        vec+=tam;
    }
}

void mostrar_entero(void *e)
{
    const int *ent = (int*)e;
    printf("%d ", *ent);
}


