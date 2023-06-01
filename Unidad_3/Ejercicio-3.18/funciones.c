#include "header.h"

void ordenar_generico_seleccion(void *vec, size_t cantE, size_t tamE, int(*comparar)(const void *, const void *))
{
    void *fin = vec+(cantE-1)*tamE;
    void *menor;
    while(vec<fin)
    {
        menor = buscar_menor(vec, fin, tamE, comparar);
        if(vec != menor)
        {
            intercambiar(vec, menor, tamE);
        }
        vec+=tamE;
    }
}


void *buscar_menor(void *vec, void *fin, size_t tamE, int(*comparar)(const void *, const void *))
{
    void *men = vec;
    vec+=tamE;
    while(vec<=fin)
    {
        if(comparar(vec, men) < 0)
        {
            men = vec;
        }
        vec+=tamE;
    }
    return men;
}


int comparar_enteros(const void *e1, const void *e2)
{
    int *numero1 = (int*)e1;
    int *numero2 = (int*)e2;
    return *numero1-*numero2;
}


void intercambiar(void *vec, void *menor, size_t tamE)
{
    void *aux = malloc(tamE);
    memcpy(aux, vec, tamE);
    memcpy(vec, menor, tamE);
    memcpy(menor, aux, tamE);
}

void mostrar_generico(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void *))
{
    int i;
    for(i=0; i<cantE; i++)
    {
        mostrar(vec);
        vec+=tamE;
    }
}


void mostrar_entero(void *vec)
{
    int *ve = (int*)vec;
    printf("\n%d", *ve);
}

