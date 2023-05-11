#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia,
    mes,
    anio;
}t_fecha;

typedef struct
{
    long dni;
    char apyn[30];
    char categoria;
    t_fecha fechIngreso;
    float sueldo;
}t_empleado;

int crear_archivo(char *nombreArchivo);
int leer_archivo(char *nombreArchivo);
void mostrar_empleado(const t_empleado *emp);

#endif // HEADER_H_INCLUDED
