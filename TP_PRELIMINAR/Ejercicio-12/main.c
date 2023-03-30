#include "header.h"

int main()
{
    int numero;
    printf("Ingrese un numero natural: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("La suma de los numeros pares menores que %d es: %d", numero, numeos_pares_menores_que(numero));
    }else{
        printf("ERROR. Numero ingresado incorrecto");
        return 1;
    }




    return 0;
}
