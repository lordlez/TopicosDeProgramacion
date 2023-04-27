#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define FIL 2
#define COL 4

void transponer(int mat[][COL], int mat2[][FIL]);
void mostrar_matriz(int mat[][COL]);
void mostrar_matriz_transpuesta(int mat2[][FIL]);


#endif // HEADER_H_INCLUDED
