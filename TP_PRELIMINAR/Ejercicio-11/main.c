#include "header.h"

int main()
{
    int numero;
    printf("Ingrese un numero natural: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("La suma de los primeros %d numeros pares es de: %d", numero, suma_primeros_pares(numero));
    }else{
        printf("ERROR. El numero ingresado no es mayor a cero");
        return 1;
    }



    return 0;
}
