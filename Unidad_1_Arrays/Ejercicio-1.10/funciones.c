#include "header.h"


float sumar_superior_diag_principal(float mat[][COL])
{
    int i, j;
    float res1 = 0;
    for(i=0; i < FIL; i++)
    {
        for(j=i+1; j < COL; j++)
        {
            res1 += mat[i][j];
        }
    }
    return res1;
}

float sumar_superior_diag_secundaria(float mat[][COL])
{
    int i, j;
    float res2 = 0;

    for(i=0; i<FIL; i++)
    {
        for(j=0;j<COL-i-1;j++)
        {
            res2 += mat[i][j];
        }
    }
    return res2;
}


float sumar_superior_diag_principal_incluida(float mat[][COL])
{
    int i, j, res3 = 0;
    for(i=0; i<FIL; i++)
    {
        for(j=0+i;j<COL;j++)
        {
            res3 += mat[i][j];
        }
    }
    return res3;
}


float sumar_superior_diag_secundaria_incluida(float mat[][COL])
{
    int i, j, res4 = 0;
    for(i=0; i<FIL; i++)
    {
        for(j=0; j<COL-i; j++)
        {
            res4 += mat[i][j];
        }
    }
    return res4;
}


float sumar_inferior_diag_principal(float mat[][COL])
{
    int i, j, res5 = 0;
    for(i=1; i<FIL; i++)
    {
        for(j=0; j<COL-2+(i-1); j++)
        {
            res5 += mat[i][j];
        }
    }
    return res5;
}


float sumar_inferior_diag_secundaria(float mat[][COL])
{
    int i, j, res6 = 0;
    for(i=1; i<FIL; i++)
    {
        for(j=3-i; j<COL; j++)
        {
            res6 += mat[i][j];
        }
    }
    return res6;
}


float sumar_inferior_diag_principal_incluida(float mat[][COL])
{
    int i, j, res7 = 0;
    for(i=0; i<FIL; i++)
    {
        for(j=0; j<COL+(-2+i); j++)
        {
            res7 += mat[i][j];
        }
    }
    return res7;
}


float sumar_inferior_diag_secundaria_incluida(float mat[][COL])
{
    int i, j, res8 = 0;
    for(i=0; i<FIL; i++)
    {
        for(j=2-i; j<COL; j++)
        {
            res8 += mat[i][j];
        }
    }
    return res8;
}

