#include "header.h"

int main()
{
    int vec[] = {6,8,7,5,1,10,4,3,9,2};

    ordenar_burbujeo(vec, 10, sizeof(int), comparar_enteros);

    mostrar_vector(vec, 10, sizeof(int), mostrar_entero);

    return 0;
}
