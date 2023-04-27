#include "header.h"


void trasponer(int mat[][COL])
{
    int i, j, temp;
    for(i=0; i<COL; i++)
    {
        for(j=0+i; j<COL; j++)
        {
            if(i!=j)
            {
                temp = mat[j][i];
                mat[j][i] = mat[i][j];
                mat[i][j] = temp;
            }
        }
    }
}

void mostrar_matriz(int mat[][COL])
{
    int i, j;
    for(i=0; i<COL; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
