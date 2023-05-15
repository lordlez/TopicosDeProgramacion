#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int menu();
int cargar_vector_flotante(float *vec, int maxElem);
float minimo_elemento(float *vec, int ce);
float promedio_pares(float *vec, int ce);
void invertir_vector(float *vec, int ce);
void mostrar_vector(float *vec, int ce);
int escribir_texto();

#endif // HEADER_H_INCLUDED
