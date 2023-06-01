#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ANIO_BASE 1601


typedef struct
{
    int dia;
    int mes;
    int anio;
}t_fecha;

int es_fecha_valida(t_fecha fecha);
int cantidad_dias_mes(int mes, int anio);
int es_bisiesto(int anio);
void dias_entre_fechas(t_fecha fecha1, t_fecha fecha2);

#endif // HEADER_H_INCLUDED
