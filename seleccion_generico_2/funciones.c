#include "header.h"

void ordenar_seleccion(void *vec, size_t ce, size_t tam, int(*cmp)(const void *, const void *))
{
    void *fin = vec+(ce-1)*tam;
    void *men;

    while(vec<fin)
    {
        men = buscar_menor(vec, fin, tam, cmp);
        if(men != vec)
        {
            intercambiar(vec, men, tam);
        }
        vec+=tam;
    }
}


void *buscar_menor(void *vec, void *fin, size_t tam, int(*cmp)(const void*, const void*))
{
    void *men = vec;
    vec+=tam;

    while(vec<=fin)
    {
        if(cmp(vec, men)<0)
        {
            men = vec;
        }
        vec+=tam;
    }
    return men;
}


int comparar_enteros(const void *e1, const void *e2)
{
    const int *entero1 = (const int*)e1;
    const int *entero2 = (const int*)e2;
    return *entero1-*entero2;
}


void intercambiar(void *e1, void *e2, size_t tam)
{
    char *aux;
    aux = (char*)malloc(tam);
    mi_memcpy(aux, e1, tam);
    mi_memcpy(e1, e2, tam);
    mi_memcpy(e2, aux, tam);
    free(aux);
}


void mostrar_vector(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void *))
{
    int i;
    for(i=0;i<cantE;i++)
    {
        mostrar(vec);
        vec+=tamE;
    }
}


void mostrar_entero(void *dato)
{
    int *valor = (int*)dato;
    printf("%d ", *valor);
}

void *mi_memcpy(void *s1, const void *s2, size_t n)
{
    char *e1 = (char*)s1;
    char *e2 = (char*)s2;
    int i;

    for(i=0; i<n; i++)
    {
        *e1 = *e2;
        e1++;
        e2++;
    }
    return e1;
}
