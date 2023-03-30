#include "header.h"

int main()
{
    int numero;
    float tol;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("Ingrese una tolerancia (0.1-0.9): ");
    scanf("%f", &tol);

    printf("El SEN(%d) es: %.2f", numero, sen(numero, tol));


    return 0;
}
