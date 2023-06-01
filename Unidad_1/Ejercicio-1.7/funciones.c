#include "header.h"

int cadena_a_numero(char *cad)
{
    int resultado = 0;

    while(*cad != '\0')
    {
        resultado = resultado*10 + ((*cad)-'0');
        cad++;
    }
    return resultado;
}




