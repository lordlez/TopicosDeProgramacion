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

int comparar_dni(const void *e1, const void *e2);
void mostrar_generico(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void *));
void mostrar_persona(void *dato);





#endif // HEADER_H_INCLUDED
