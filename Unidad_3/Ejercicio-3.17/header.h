#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void insertar_orden_generico(void *vec, int *cantE, size_t tamE, void *valor, int(*comparar)(const void *, const void *));
int comparar_enteros(const void *e1, const void *e2);
void mostrar_generico(void *vec, size_t cantE, size_t tamE, void (*mostrar)(void *));
void mostrar_enteros(void *vec);


#endif // HEADER_H_INCLUDED
