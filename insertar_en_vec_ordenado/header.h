#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void insertar_en_orden_generico(void *vec, int *ce, size_t tamE, void *valor, int(*cmp)(const void *, const void *));
void *mi_memcpy(void *s1, const void *s2, size_t n);
void *mi_memmove(void *s1, const void *s2, size_t n);
int comparar_enteros(const void *e1, const void *e2);
void mostrar_vector(void *vec, size_t ce, size_t tamE, void (*mostrar)(void *));
void mostrar_entero(void *dato);

#endif // HEADER_H_INCLUDED
