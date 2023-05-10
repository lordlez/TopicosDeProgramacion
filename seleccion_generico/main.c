#include "header.h"

int main()
{
    int vec[] = {6,8,7,5,1,10,4,3,9,2};

    //vector, cantidad elementos, tamaño de los elementos, funcion comparar enteros
    ordenar_seleccion(vec, 10, sizeof(int), comparar_enteros);

    //vector, cantidad elementos, tamaño de los elementos, funcion mostrar enteros
    mostrar_vector(vec, 10, sizeof(int), mostrar_enteros);

    return 0;
}
