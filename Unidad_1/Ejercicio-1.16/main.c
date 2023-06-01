#include "header.h"

int main()
{
    int mat[FIL][COL] = {{3,8,4,7},
                         {5,9,1,2}
                        };
    int mat2[COL][FIL];

    printf("Matriz original\n");

    mostrar_matriz(mat);

    transponer(mat, mat2);

    printf("\nMatriz transpuesta\n");

    mostrar_matriz_transpuesta(mat2);

    return 0;
}
