#include "header.h"

int main()
{
    int vec[] = {3,2,1};
    int ce = 3;
    qsort(vec,3,sizeof(int),comparar_enteros_menor);
    mostrar_vec_generico(vec, ce, sizeof(int), mostrar_vector_entero);
    printf("\n");
    qsort(vec,3,sizeof(int),comparar_enteros_mayor);
    mostrar_vec_generico(vec, ce, sizeof(int), mostrar_vector_entero);


    return 0;
}
//Preguntar: Por que me muestra un cuarto elemento, el menor
