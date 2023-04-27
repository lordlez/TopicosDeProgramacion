#include "header.h"

int main()
{
    float res1, res2, res3, res4, res5, res6, res7, res8;
    float mat[FIL][COL] = {{8,8,7,1,1},
                           {6,5,2,1,1},
                           {1,2,9,1,1},
                           {1,2,9,1,1},
                           {1,2,9,1,1}
                          };

    res1 = sumar_superior_diag_principal(mat);
    res2 = sumar_superior_diag_secundaria(mat);
    res3 = sumar_superior_diag_principal_incluida(mat);
    res4 = sumar_superior_diag_secundaria_incluida(mat);

    res5 = sumar_inferior_diag_principal(mat);
    res6 = sumar_inferior_diag_secundaria(mat);
    res7 = sumar_inferior_diag_principal_incluida(mat);
    res8 = sumar_inferior_diag_secundaria_incluida(mat);

    printf("Suma por encima de la diagonal principal: %.2f", res1);
    printf("\nSuma por encima de la diagonal secundaria: %.2f", res2);
    printf("\nSuma por encima de la diagonal principal incluida: %.2f", res3);
    printf("\nSuma por encima de la diagonal secundaria incluida: %.2f", res4);

    printf("\nSuma por debajo de la diagonal principal: %.2f", res5);
    printf("\nSuma por debajo de la diagonal secundaria: %.2f", res6);
    printf("\nSuma por debajo de la diagonal principal incluida: %.2f", res7);
    printf("\nSuma por debajo de la diagonal secundaria incluida: %.2f", res8);


    return 0;
}
