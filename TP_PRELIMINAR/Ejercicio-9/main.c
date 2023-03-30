#include "header.h"

int main()
{
    int numero1, numero2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero(distinto de cero): ");
    scanf("%d", &numero2);

    if(numero2 != 0){
        cociente_entero_resto(numero1, numero2);
    }else{
        printf("El segundo numero no debio ser cero");
        return 1;
    }


    return 0;
}
