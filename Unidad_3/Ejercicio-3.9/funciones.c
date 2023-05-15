#include "header.h"

int comparar_enteros_menor(const void*e1, const void *e2)
{
    int *ent1 = (int*)e1;
    int *ent2 = (int*)e2;
    return *ent1 - *ent2;
}

int comparar_enteros_mayor(const void*e1, const void *e2)
{
    int *ent1 = (int*)e1;
    int *ent2 = (int*)e2;
    return *ent2 - *ent1;
}

void mostrar_vec_generico(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void*))
{
    int i;
    for(i=0;i<cantE;i++)
    {
        mostrar(vec);
        vec+=tamE;
    }
}

void mostrar_vector_entero(void *vec)
{
    int *ve = (int*)vec;
    printf("%d, ", *ve);
}


