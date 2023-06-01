#include "header.h"

int main()
{
    int vec[] = {3,8,4,5,1,9};
    int ce = 6;

    ordenar_generico_seleccion(vec, ce, sizeof(int), comparar_enteros);

    mostrar_generico(vec, ce, sizeof(int), mostrar_entero);

    return 0;
}
