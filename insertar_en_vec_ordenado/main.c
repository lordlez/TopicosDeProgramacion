#include "header.h"

int main()
{
    int vec[4] = {3,5,7,9};
    int ce = 4;
    int valor = 6;

    insertar_en_orden_generico(vec, &ce, sizeof(int), &valor, comparar_enteros);

    mostrar_vector(vec, ce, sizeof(int), mostrar_entero);

    return 0;
}
