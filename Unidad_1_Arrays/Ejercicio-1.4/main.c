#include "header.h"

int main()
{
    int vec[TAM]={3,8,1,4,1};
    int ce = 5, valor =1;

    eliminar_repetido(vec, &ce, valor);

    mostrar_vector(vec, &ce);

    return 0;
}
