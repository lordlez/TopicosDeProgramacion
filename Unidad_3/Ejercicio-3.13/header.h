#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dni;
    char apellido[20];
    char nombres[30];
    float peso;
}t_persona;

int encontrar(t_persona *p, int ce, t_persona *apyn);
int buscar_por_apellido_nombre(t_persona *p, t_persona *apyn);

#endif // HEADER_H_INCLUDED
