#include "header.h"

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if(numero >= 0){
        factorial(numero);
    }
    else{
        printf("El numero debe ser natural positivo");
        return 1;
    }

    printf("El factorial de %d es %d", numero, factorial(numero));

    return 0;
}
