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
    float sueldo;
}t_empleados;

typedef struct
{
    int dni;
    char apellido[30];
    char nombre[30];
    float promedio;
}t_estudiantes;

int cargar_archivo_bin1(char *rutaBin1);
int cargar_archivo_bin2(char *rutaBin2);
int cargar_archivo_txt_variable1(char *rutaDestino, char *rutaOrigen);
int cargar_archivo_txt_variable2(char *rutaDestino, char *rutaOrigen);


#endif // HEADER_H_INCLUDED
