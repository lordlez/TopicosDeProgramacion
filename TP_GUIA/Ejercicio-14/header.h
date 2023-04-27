#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ANIO_BASE 1601
#define VERDADERO 1
#define FALSO 0

typedef struct{
    int dia;
    int mes;
    int anio;
}t_fecha;

int esFechaValida(t_fecha fecha);
int esBisiesto(int anio);
int cantidadDiasMes(int mes, int anio);
int continuar(char *mensaje);

#endif // HEADER_H_INCLUDED
