#include "header.h"

int contar_palabra(char *texto, char *palabra)
{
    int contadorPalabra = 0, contadorTexto = 0, contador = 0;
    char *tex = texto;
    char *pal = palabra;
    char *iniPal = palabra;

    while(*pal != '\0')
    {
        contadorPalabra++;
        pal++;
    }

    if(contadorPalabra == 0)
        return FALSO;

    while(*tex != '\0')
    {
        contadorTexto++;
        tex++;
    }

    if(contadorTexto == 0)
        return FALSO;

    if(contadorTexto < contadorPalabra)
        return FALSO;

    while(*texto != '\0')
    {
        if(*palabra == *texto)
        {
            palabra++;
            if(*palabra == '\0')
            {
                palabra = iniPal;
                contador++;
            }
            texto++;
        }else
        {
            palabra = iniPal;
            texto++;
        }
    }

    return contador;
}




