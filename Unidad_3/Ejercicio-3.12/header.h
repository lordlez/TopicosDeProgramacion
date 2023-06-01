#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dni;
    char apellido[20];
    char nombres[30];
    float peso;
}t_persona;

int buscarXdni(const t_persona *p, t_persona *d);
int encontrar(t_persona *p, int ce, t_persona *d);


#endif // HEADER_H_INCLUDED
