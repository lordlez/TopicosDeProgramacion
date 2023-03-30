#include "header.h"

int main()
{
    int numero1, numero2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    printf("El producto de ambos numeros por sumas sucesivas es: %d", producto_sumas_sucesivas(numero1, numero2));

    return 0;
}
