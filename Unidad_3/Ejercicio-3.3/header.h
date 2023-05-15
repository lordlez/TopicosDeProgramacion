#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    long int sum;
    float pro;
}t_valores;



void cargar_vector_enteros(int *vec, int maxTam, int *ce);
float promedio_y_suma(int *vec, int ce, long int *suma);
t_valores prom_y_sum(int *vec, int ce);


#endif // HEADER_H_INCLUDED
