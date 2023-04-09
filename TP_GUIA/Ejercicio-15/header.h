#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ANIO_BASE 1600
#define VERDADERO 1
#define FALSO 0

typedef struct{
    int dia;
    int mes;
    int anio;
}t_fecha;

int esFechaValida(t_fecha fecha);
int cantidadDiasMes(int mes, int anio);
int esBisiesto(int anio);
void diaDespues(t_fecha fecha);


#endif // HEADER_H_INCLUDED
