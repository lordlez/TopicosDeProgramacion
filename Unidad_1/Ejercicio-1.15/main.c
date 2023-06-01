#include "header.h"

int main()
{
    int mat[][COL] = {{1,3,4},
                      {8,7,5},
                      {9,2,6},
                     };

    printf("Matriz original\n");

    mostrar_matriz(mat);

    trasponer(mat);

    printf("\nMatriz transpuesta\n");

    mostrar_matriz(mat);

    return 0;
}
