#include "header.h"

int main()
{
    int fil1, col1, fil2, col2;


    printf("DATO: La cantidad de columnas de la primera matriz deben ser las mismas que las filas de la segunda matriz\n");

    printf("Ingrese filas de la primera matriz: ");
    scanf("%d", &fil1);
    printf("Ingrese columnas de la primera matriz: ");
    scanf("%d", &col1);
    printf("Ingrese filas de la segunda matriz: ");
    scanf("%d", &fil2);
    printf("Ingrese columnas de la segunda matriz: ");
    scanf("%d", &col2);

    int mat1[100][100];
    int mat2[100][100];
    int mat3[100][100] = {0};

    if(col1 == fil2)
    {
        printf("\nCargando la primera matriz...");
        cargar_matriz(mat1, fil1, col1);

        printf("\nCargando la segunda matriz...");
        cargar_matriz(mat2, fil2, col2);

        producto_matrices(mat1, fil1, col1, mat2, fil2, col2, mat3);

        printf("\nEl producto de ambas matrices es\n");

        mostrar_matriz(mat3, fil1, col2);
    }
    else
    {
        printf("Error de DATO");
    }


    return 0;
}
