#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PROTOTIPOS NORMALES
//void ordenar_seleccion(int *vec, int ce);
//int *buscar_menor(int *vec, int *fin);
//void intercambiar(int *e1, int *e2);
//void mostrar_vector(int *vec, int ce);

//PROTOTIPOS GENERICOS
void qsort(void *base, size_t nmemb, size_t tamanyo, int (*cmp)(const void*, const void*));
void ordenar_seleccion(void *vec, size_t ce, size_t tam, int(*cmp)(const void*, const void*));
void *buscar_menor(void *vec, void *fin, size_t tam, int(*cmp)(const void*, const void*));
void intercambiar(void *e1,void *e2, size_t tam);
int cmp_enteros(const void* e1, const void* e2);

int main()
{
    int vec[] = {6,8,7,5,1,10,4,3,9,2};

    ordenar_seleccion(vec, 10, sizeof(int), cmp_enteros);

    return 0;
}

/*
void ordenar_seleccion(int *vec, int ce)
{
    int *fin = vec+(ce-1);
    int *men;
    while(vec<fin)
    {
        men = buscar_menor(vec,fin);
        if(men!=vec)
            intercambiar(vec,men);
        vec++;
    }
}

int *buscar_menor(int *vec, int *fin)
{
    int *men = vec;
    vec++;
    while(vec<=fin)
    {
        if(*vec<*men)
            men = vec;
        vec++;
    }
    return men;
}


void intercambiar(int *e1, int *e2)
{
    int aux = *e1;
    *e1 = *e2;
    *e2 = aux;
}

void mostrar_vector(int *vec, int ce)
{
    int i;
    for(i=0; i<ce; i++)
    {
        printf("%d ", *vec);
        vec++;
    }
}
*/

///FUNCIONES GENERICAS

void ordenar_seleccion(void *vec, size_t ce, size_t tam, int(*cmp)(const void*, const void*))
{
    void *fin = vec+(ce-1)*tam;
    void *men;
    while(vec < fin)
    {
        men = buscar_menor(vec, fin, tam, cmp);
        if(men!=vec)
            intercambiar(vec, men, tam);
        vec+=tam;
    }
}


void *buscar_menor(void *vec, void *fin, size_t tam, int(*cmp)(const void*, const void*))
{
    void *men = vec;
    vec+=tam;
    while(vec<=fin)
    {
        if(cmp(vec,men)<0)
        {
            men  = vec;
        }
        vec+=tam;
    }
    return men;
}


int cmp_enteros(const void* e1, const void* e2)
{
    const int *ent1 = (const int*)e1;
    const int *ent2 = (const int*)e2;
    return *ent1-*ent2;
}



void intercambiar(void *e1,void *e2, size_t tam)
{
    char aux[1000];
    memcpy(aux, e1, tam);
    memcpy(e1, e2, tam);
    memcpy(e2,aux,tam);
}



void mostrar_vector()
{

}
