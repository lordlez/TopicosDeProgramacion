#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int comparar_enteros_menor(const void*e1, const void *e2);
int comparar_enteros_mayor(const void*e1, const void *e2);
void mostrar_vec_generico(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void*));
void mostrar_vector_entero(void *vec);

#endif // HEADER_H_INCLUDED
