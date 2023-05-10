#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenar_seleccion(void *vec, size_t ce, size_t tam, int(*cmp)(const void *, const void *));
void *buscar_menor(void *vec, void *fin, size_t tam, int(*cmp)(const void*, const void*));
int comparar_enteros(const void *e1, const void *e2);
void intercambiar(void *e1, void *e2, size_t tam);
void mostrar_vector(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void *));
void mostrar_enteros(void *dato);

#endif // HEADER_H_INCLUDED
