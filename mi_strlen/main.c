#include "header.h"

int main()
{
    int letras;
    char cad[] = "hola a todos";

    letras = mi_strlen(cad);

    printf("La cadena %s tiene un total de %d letras", cad, letras);

    return 0;
}
