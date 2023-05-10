#include "header.h"

char *copia_cadena(const char *origen)
 {
    char *destino;
    //calculo la cantidad de caracteres de origen y le sumo 1 por el fin de caracter
    int longitud = strlen(origen) + 1;
    destino = (char*)malloc(sizeof(char)*longitud);
    if(destino == NULL)
    {
        printf("No se pudo reservar memoria.");
        return -1;
    }

    strcpy(destino, origen);

    return destino;
 }


void *copia_cosas(void *elemento, unsigned tam)
{
    void *nuevoElemento;
    nuevoElemento = (void*)malloc(tam);
    if(nuevoElemento == NULL)
    {
        printf("No se puedo reservar memoria");
        return NULL;
    }

    memcpy(nuevoElemento, elemento, tam);

    return nuevoElemento;
}


