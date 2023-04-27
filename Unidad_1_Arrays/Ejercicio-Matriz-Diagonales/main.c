#include "header.h"

int main()
{
    int res1, res2;
    int mat[][COL] = {{1,3,8,9,2,4},
                     {4,5,2,4,3,6},
                     {7,6,2,1,1,7},
                     {5,5,4,9,0,8},
                     {7,8,2,3,7,9},
                     {6,4,5,2,1,3}
                     };

    res1 = suma_sup_principal_Secundaria(mat);
    res2 = suma_sup_principal_debajo_Secundaria(mat);

    printf("La suma de los valores por encima de la diagonal principal y secundaria es: %d\n", res1);
    printf("La suma de los valores por encima de la diagonal principal y debajo de la secundaria es: %d\n", res2);

    return 0;
}
