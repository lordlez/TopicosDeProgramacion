#include "header.h"

int es_diagonal(int mat[][COL])
{
    int i, j;
    for(i=0; i<COL; i++)
    {
        for(j=0; j<COL; j++)
        {
            if(i == j)
            {
                if(mat[i][j] == 0)
                {
                    return FALSO;
                }
            }else{
                if(mat[i][j] != 0)
                {
                    return FALSO;
                }
            }
        }
    }
    return VERDADERO;
}


