#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[15];
    int edad;
}t_dato;





char *copia_cadena(const char *origen);
void *copia_cosas(void *elemento, unsigned tam);




#endif // HEADER_H_INCLUDED
