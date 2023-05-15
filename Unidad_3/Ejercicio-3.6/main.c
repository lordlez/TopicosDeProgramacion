#include "header.h"

int main()
{
    float real = 3.49;
    int entero = -32;
    int numero = 4;
    int x = 5, y = 25;
    char letra = 't';
    char digito = 'a';
    char caracter = 'A';
    //char blanco = ' ';
    char minus = 'a';
    char mayus = 'A';
    int num1 = 3, num2 = 5, menor;


    printf("Valor: %.2f; Redondeo: %d", real, REDONDEO(real));
    printf("\nValor: %d; Valor absoluto: %d", entero, VALOR_ABSOLUTO(entero));
    printf("\nValor: %.2f; Parte entera: %d", real, PARTE_ENTERA(real));
    printf("\nValor: %.2f; Parte decimal: %.2f", real, PARTE_DECIMAL(real));
    printf("\n");
    ES_PAR(numero);
    printf("\n");
    ES_POTENCIA_DE(x,y);
    printf("\n");
    ES_LETRA(letra);
    printf("\n");
    ES_DIGITO(digito);
    printf("\n");
    ES_MAYUSCULA(caracter);
    printf("\n");
    ES_MINUSCULA(caracter);
    printf("\n");
    //ES_BLANCO();
    printf("\nConvertido a mayuscula: %c",A_MAYUSCULA(minus));
    printf("\nConvertido a minuscula: %c",A_MINUSCULA(mayus));

    menor = menor_de_dos_enteros(num1, num2);
    printf("\nEl menor entre %d y %d es: %d", num1, num2, menor);

    printf("\nEl menor es: %d", MENOR_DE_DOS_ENTEROS(num1, num2));



    return 0;
}
