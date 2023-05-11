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

int crear_archivo_texto_variable(char *archivoOrigen, char *archivoDestino);
int leer_mostrar_archivo_texto_variable(char *nombreArchivo);

#endif // HEADER_H_INCLUDED
