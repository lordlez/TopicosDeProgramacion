#include "header.h"

int main()
{
    int num1 = 5;
    int num2 = 7;

    printf("Antes de intercambiar");
    printf("\nNumero 1: %d", num1);
    printf("\nNumero 2: %d", num2);
    intercambio_generico(&num1, &num2, sizeof(int));
    printf("\nDespues de intercambiar");
    printf("\nNumero 1: %d", num1);
    printf("\nNumero 2: %d", num2);

    char cad1[] = "ho";
    char cad2[] = "mundo";

    printf("\nAntes de intercambiar");
    printf("\nCadena 1: %s", cad1);
    printf("\nCadena 2: %s", cad2);
    //en el tercer parametro le debo mandar la cad mas larga
    intercambio_generico(cad1, cad2, strlen(cad2)+1);
    printf("\nDespues de intercambiar");
    printf("\nCadena 1: %s", cad1);
    printf("\ncadena 2: %s", cad2);


    return 0;
}
