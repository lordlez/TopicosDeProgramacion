#include "header.h"

int main()
{
    int numero;
    printf("Ingrese un numero natural: ");
    scanf("%d", &numero);

    if(numero > 0){
        perfecto_deficiente_abundante(numero);
    }else{
        printf("El numero ingresado no es valido");
    }

    return 0;
}
