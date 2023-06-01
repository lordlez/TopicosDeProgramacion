#include "header.h"

int main()
{
    int vec[TAM] = {3,8,1,20,6};
    int numero, posicion;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("Ingrese una posicion (1-5): ");
    scanf("%d", &posicion);

    if(posicion >= 1 && posicion <= 5)
    {
        insertarPorPosicion(vec, TAM, numero, posicion);
        mostrarVector(vec, TAM);
    }else{
        printf("El rango de posicion ingresado es incorrecto.");
    }



    return 0;
}
