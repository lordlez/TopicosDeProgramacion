#include "header.h"

int es_palindromo(char *cadena)
{
    char *ini;
    ini = cadena;

    while(*cadena != '\0')
    {
        cadena++;
    }

    cadena--;

    while(ini<cadena)
    {
        if(*ini == ' ')
            ini++;

        if(*cadena == ' ')
            cadena--;

        if(*ini != *cadena)
        {
            return FALSO;
        }
        ini++;
        cadena--;
    }
    return VERDADERO;
}
