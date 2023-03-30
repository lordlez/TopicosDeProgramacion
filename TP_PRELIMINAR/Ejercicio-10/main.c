#include "header.h"

int main()
{
    int numero;
    printf("Ingrese un numero entero natural: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("La suma de los primeros %d numeros naturales es de: %d", numero, suma_primeros_naturales(numero));
    }else{
        printf("El numero no es el pedido");
        return 1;
    }

    return 0;
}
