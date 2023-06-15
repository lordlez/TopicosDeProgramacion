#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dni;
    char apyn[30];
    float sueldo;
}t_empleado;



int crear_archivo(char *ruta);
int crear_archivo_vacio(char *ruta);
int actualizar_archivo(char *ruta, char *ruta2, float porcentaje);
int leer_archivo(char *ruta);

#endif // HEADER_H_INCLUDED
