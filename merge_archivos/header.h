#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}t_fecha;


typedef struct
{
    int dni;
    char apyn[30];
    char sexo;
    float promedio;
    int notas[50];
    t_fecha fechaIngr;
    char estado;
}t_alumno;

int cargar_archivo1(char *ruta);
int cargar_archivo2(char *ruta);





#endif // HEADER_H_INCLUDED
