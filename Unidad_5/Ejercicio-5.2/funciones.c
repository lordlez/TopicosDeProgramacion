#include "header.h"

void primera_palabra(char *cad, char *cad1)
{
    char *fin = cad;
    char *cadena = cad1;

    while(*fin != ' ')
    {
        fin++;
    }

    while(cad<fin)
    {
        *cadena = *cad;
        cad++;
        cadena++;
    }
    *cadena = '\0';
}

int repeticiones(char *cad, char *cad1)
{
    char *fin = cad;
    char *iniCad1 = cad1;
    int repetido = 0;
    while(*fin != '\0')
    {
        fin++;
    }
    while(cad<fin)
    {
        if(*cad == *iniCad1)
        {
            cad++;
            iniCad1++;
            if(*iniCad1 == '\0')
            {
                repetido++;
                iniCad1 = cad1;
            }
        }else
        {
            cad++;
        }
    }
    return repetido;
}


int cantidad_palabras(char *cad)
{
    int cantidad = 0;
    char *fin = cad;

    while(*fin != '\0')
    {
        fin++;
    }


    while(cad<fin)
    {
        if(*cad == ' ' || *cad == ',' || *cad == '.')
        {
            cantidad++;
        }
        cad++;
    }
    return cantidad;
}

int palabra_mas_larga(char *cad)
{
    int longitud = 0, maxLongitud = 0;
    char *fin = cad;
    while(*fin != '\0')
    {
        fin++;
    }
    while(cad < fin)
    {
        if(*cad != ' ' && *cad != '.' && *cad != ',')
        {
            longitud++;
        }else
        {
            longitud = 0;
        }

        if(longitud > maxLongitud)
        {
            maxLongitud = longitud;
        }
        cad++;
    }
    return maxLongitud;
}


