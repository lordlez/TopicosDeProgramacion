#include "header.h"

int main()
{
    int vector[] = {5,6,4,7,8,1,3,2,9};
    int ce = 9;

    ordenar_seleccion(vector, ce, sizeof(int), comparar_enteros);

    mostrar_vector(vector, ce, sizeof(int), mostrar_entero);


    return 0;
}
