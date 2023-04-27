#include "header.h"


int suma_sup_principal_Secundaria(int mat[][COL])
{
    int i, j, res = 0;
    for(i=0; i<FIL/2; i++)
    {
        for(j=1+i; j<COL-1-i; j++)
        {
            res += mat[i][j];
        }
    }
    return res;
}


int suma_sup_principal_debajo_Secundaria(int mat[][COL])
{
    int i, j, res2 = 0;
    for(i=1; i<FIL-1; i++)
    {
        for(j=COL-i; j<COL; j++)
        {

        }
    }
    return res2;
}
