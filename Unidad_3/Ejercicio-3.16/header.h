#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dni;
    char nombre[10];
    char apellido[10];
    float promedio;
}t_alumno;

void *buscar_menor_generico(void *vec, size_t cantE, size_t tamE, int(*comparar)(const void *, const void *));
int comparar_enteros(const void *e1, const void *e2);
int comparar_flotantes(const void *e1, const void *e2);
int comparar_alumno_dni(const void *e1, const void *e2);
int comparar_alumno_nom(const void *e1, const void *e2);
int comparar_alumno_ape(const void *e1, const void *e2);
int comparar_alumno_prom(const void *e1, const void *e2);

#endif // HEADER_H_INCLUDED
