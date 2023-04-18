#include "header.h"

int main()
{
    int palindromo;
    char cadena[] = "anita lava la tina";

    palindromo = es_palindromo(cadena);

    if(palindromo)
    {
        printf("La cadena es un palindromo");
    }else
    {
        printf("La cadena no es un palindromo");
    }

    return 0;
}
