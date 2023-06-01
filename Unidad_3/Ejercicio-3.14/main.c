#include "header.h"

int main(int argc, char *argv[])
{
    if(argc!=4)
    {
        printf("Error, debe ingresar tres valores");
        return -1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    char operacion = *argv[3];
    int suma, resta, multi;
    float divi;


    switch(operacion)
    {
    case '+':
        suma = num1+num2;
        printf("La suma es: %d", suma);
        break;
    case '-':
        resta = num1-num2;
        printf("La resta es: %d", resta);
        break;
    case '.':
        multi = num1*num2;
        printf("La multiplicacion es: %d", multi);
        break;
    case '/':
        if(num2 != 0)
        {
            divi = num1/num2;
            printf("La division es: %.2f", divi);
        }
        else
        {
            printf("No se puede dividir por cero");
        }
        break;
    default:
        printf("Error. Operacion invalida.");
    }

    return 0;
}
