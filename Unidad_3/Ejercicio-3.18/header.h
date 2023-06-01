#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenar_generico_seleccion(void *vec, size_t cantE, size_t tamE, int(*comparar)(const void *, const void *));
void *buscar_menor(void *vec, void *fin, size_t tamE, int(*comparar)(const void *, const void *));
int comparar_enteros(const void *e1, const void *e2);
void intercambiar(void *vec, void *menor, size_t tamE);
void mostrar_generico(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void *));
void mostrar_entero(void *vec);

#endif // HEADER_H_INCLUDED
