#include "header.h"

void ordenar_seleccion(void *vec, size_t ce, size_t tam, int(*cmp)(const void*, const void*))
{
    void *fin = vec+(ce-1)*tam; //me ubico en el final del vector
    void *men; //creo un puntero para el menor

    while(vec<fin)
    {
        men = buscar_menor(vec, fin, tam, cmp);
        if(men != vec)
        {
            intercambiar(men, vec, tam);
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
        if(cmp(vec, men) < 0)
        {
            men = vec;
        }
        vec+=tam;
    }
    return men;
}


int comparar_enteros(const void *e1, const void *e2)
{
    //casteo las variables void a const int
    const int *ent1 = (const int*)e1;
    const int *ent2 = (const int*)e2;
    return *ent1-*ent2;
}


void intercambiar(void *e1, void *e2, size_t tam)
{
    char aux[1000];
    memcpy(aux, e1, tam);//destino, origen, cantidad de bytes a pasar
    memcpy(e1, e2, tam);
    memcpy(e2, aux, tam);
}

void mostrar_vector(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void *))
{
    int i;
    for(i=0; i<cantE; i++)
    {
        mostrar(vec);
        vec+=tamE;
    }
}


void mostrar_enteros(void *dato)
{
    //casteo el valor void a entero, lo asigno y lo muestro
    const int *entero = (int*)dato;
    printf("%d ", *entero);
}
