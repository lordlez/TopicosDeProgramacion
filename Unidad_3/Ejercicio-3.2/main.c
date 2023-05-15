#include "header.h"

int main()
{
    int vec[] = {3,8,6};
    int ce = 3;
    int *direccion;
    int elemento = 3;

    direccion = direccion_elemento(vec, ce, elemento);

    printf("El elemento se encuentra en la direccion: %p", direccion);

    return 0;
}
