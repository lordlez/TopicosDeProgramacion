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

int es_fecha_valida(t_fecha fecha);
int cantidad_dias_mes(int mes, int anio);
int es_bisiesto(int anio);
void suma_n_dias_despues(t_fecha fecha, int dias);


#endif // HEADER_H_INCLUDED
