#include "header.h"

int es_simetrica(int mat[][COL])
{
    int i, j;
    for(i=0; i<COL; i++)
    {
        for(j=0; j<COL; j++)
        {
            if(i != j)
            {
                if(mat[i][j] != mat[j][i])
                {
                    return FALSO;
                }
            }
        }
    }
    return VERDADERO;
}

