#include "header.h"

void normalizar(char *cad)
{
    char *iniCad = cad;
    char *sigPalabra = cad;
    char *iniPal;

    //pongo sigPalabra en la primer palabra encontrada
    while(*sigPalabra != '\0')
    {
        while(*sigPalabra == ' ' || *sigPalabra == '\t')
        {
            sigPalabra++;
        }
        if(*sigPalabra == '\0')
        {
            break;
        }
        iniPal = sigPalabra;

        //paso la primer letra de la palabra a mayuscula
        *sigPalabra = toupper(*sigPalabra);
        sigPalabra++;
        //paso las demas letras a minusculas
        while(*sigPalabra != ' ' && *sigPalabra != '\t' && *sigPalabra != '\0')
        {
            *sigPalabra = tolower(*sigPalabra);
            sigPalabra++;
        }
        while(iniPal < sigPalabra)
        {
            *iniCad = *iniPal;
            iniCad++;
            iniPal++;
        }
        if(*sigPalabra != '\0')
        {
            *iniCad = ' ';
            iniCad++;
        }
    }
    *iniCad = '\0';
}

/********************************************************/
