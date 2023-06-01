#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char codigo[15];
    char desc[50];
    float precio;
    int stock;
}t_producto;


typedef struct
{
    char cod[11];
    long nroReg;
}t_regInd;

int cargar_archivo(char *ruta);
int actualizar_archivo(char *ruta);



#endif // HEADER_H_INCLUDED
