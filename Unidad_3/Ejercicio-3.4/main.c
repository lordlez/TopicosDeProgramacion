#include "header.h"

int main()
{
    ///atoi
/*
    char numPtr[5] = "1234";
    int numero;
    //atoi convierte una cadena de numeros a un numero real
    numero = atoi(numPtr);
    printf("El numero es: %d", numero);
*/
    ///itoa
/*
    int numero = 1234;
    char numPtr[5];
    //itoa convierte un numero a una cadena
    strcpy(numPtr,itoa(numero, numPtr, 10));
    printf("La cadena es: %s", numPtr);
*/
    ///atol
/*
    char numPtr[5] = "1234";
    long int numero;
    //atol convierte una cadena de numeros a un long int
    numero = atol(numPtr);
    printf("El numero es: %ld", numero);
*/
    ///atof
/*
    char numPtr[11] = "123.456789";
    double numero;
    //atol convierte una cadena a un valor double
    numero = atof(numPtr);
    printf("El numero es: %f", numero);
*/

    return 0;
}
