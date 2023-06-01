#include "header.h"


void transponer(int mat[][COL], int mat2[][FIL])
{
    int i, j;
    for(i=0; i<FIL; i++)
    {
        for(j=0; j<COL; j++)
        {
            mat2[j][i] = mat[i][j];
        }
    }
}


void mostrar_matriz(int mat[][COL])
{
    int i, j;
    for(i=0; i<FIL; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}



void mostrar_matriz_transpuesta(int mat2[][FIL])
{
    int i, j;
    for(i=0; i<COL; i++)
    {
        for(j=0; j<FIL; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
}

