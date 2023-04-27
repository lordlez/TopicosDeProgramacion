#include "header.h"

int traza_matriz(int mat[][FIL])
{
    int i, res = 0;
    for(i=0; i<FIL; i++)
    {
        res += mat[i][i];
    }
    return res;
}

int traza_secundaria_matriz(int mat[][FIL])
{
    int i, res1 = 0;
    for(i=0; i<FIL; i++)
    {
        res1 += mat[i][2-i];
    }
    return res1;
}


