#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    int dni;
    char apellido[30];
    char nombre[30];
    double sueldo;
}t_empleados;


typedef struct
{
    int dni;
    char apellido[30];
    char nombre[30];
    float promedio;
}t_estudiantes;

int cargar_archivo1(char *ruta);
int cargar_archivo2(char *ruta);



#endif // HEADER_H_INCLUDED
