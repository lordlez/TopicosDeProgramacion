#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dni;
    char apellido[20];
    char nombre[30];
    float peso;
}t_persona;


int comparar_apyn(const void *e1, const void *e2);
void mostrar_generico(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void *));
void mostrar_estructura(void *vec);

#endif // HEADER_H_INCLUDED
