#include "header.h"

char *mi_strcpy(char *destino, const char *origen)
{
    char *inicioDestino = destino;
    while(*origen != '\0')
    {
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = '\0';
    return inicioDestino;
}
