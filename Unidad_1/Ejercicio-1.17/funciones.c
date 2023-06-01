#include "header.h"


void cargar_matriz(int mat[][100], int fil, int col)
{
    int i, j, valor;
    for(i=0; i<fil; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Ingrese valor [%d][%d]: ", i, j);
            scanf("%d", &valor);
            mat[i][j] = valor;
        }
    }
}



void producto_matrices(int mat1[][100], int fil1, int col1, int mat2[][100], int fil2, int col2, int mat3[][100])
{
    int i, j, k;

    for(i=0; i<fil1; i++) // recorro las filas de la matriz 1
    {
        for(j=0; j<col2; j++) // recorro las columnas de la matriz 2
        {
            for(k=0; k<col1; k++) // hago la multiplicacion
            {
                mat3[i][j] += (mat1[i][k] * mat2[k][j]);
            }
        }
    }
}




void mostrar_matriz(int mat[][100], int fil, int col)
{
    int i, j;
    for(i=0; i<fil; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

