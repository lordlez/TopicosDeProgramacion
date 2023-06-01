#include "header.h"

int main()
{
    int vec[TAM] = {3,8,4,3,7,6,1,3};
    int ce = 8, eliminar = 3;

    eliminar_repetidos(vec, &ce, eliminar);

    mostrar_vector(vec, &ce);

    return 0;
}
