#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void cargar_matriz(int mat[][100], int fil, int col);
void producto_matrices(int mat1[][100], int fil1, int col1, int mat2[][100], int fil2, int col2, int mat3[][100]);
void mostrar_matriz(int mat[][100], int fil, int col);

#endif // HEADER_H_INCLUDED
