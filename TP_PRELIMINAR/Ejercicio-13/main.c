#include "header.h"

int main()
{
    int numero;
    printf("Ingrese un numero natural: ");
    scanf("%d", &numero);

    if(numero > 0){
        es_natural_primo(numero);
    }else{
        printf("ERROR. Numero incorrecto");
        return 1;
    }

    return 0;
}
