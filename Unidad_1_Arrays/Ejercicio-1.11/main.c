#include "header.h"

int main()
{
    int traza1, traza2;
    int mat[FIL][FIL] = {{3,8,9},
                         {5,2,2},
                         {1,9,7}
                         };

    traza1 = traza_matriz(mat);
    traza2 = traza_secundaria_matriz(mat);

    printf("La traza principal de la matriz es: %d", traza1);
    printf("\nLa traza secundaria de la matriz es: %d", traza2);

    return 0;
}
