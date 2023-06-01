#include "header.h"

int main()
{
    int vec[3] = {2,4,8};
    int ce = 3;
    int valor = 9;

    insertar_orden_generico(vec, &ce, sizeof(int), &valor, comparar_enteros);

    mostrar_generico(vec, ce, sizeof(int), mostrar_enteros);

    return 0;
}
