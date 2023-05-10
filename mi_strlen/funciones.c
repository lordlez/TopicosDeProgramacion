#include "header.h"

size_t mi_strlen(const char *cadena)
{
    int cantidad_letras = 0;
    while(*cadena != '\0')
    {
        cantidad_letras++;
        cadena++;
    }
    return cantidad_letras;
}






