#include "header.h"

int main()
{
    int numero1, numero2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero, menor al primero y mayor o igual a cero: ");
    scanf("%d", &numero2);

    if(numero1>=numero2 && numero2>=0){
        printf("El combinatorio de %d y %d es %d", numero1, numero2, combinatorio(numero1, numero2));
    }else{
        printf("No cumple las reglas pedidas");
        return 1;
    }




    return 0;
}
