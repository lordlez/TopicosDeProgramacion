#include "header.h"

char *mi_strrchr(char *cad, int c)
{
    int encontro = 0;
    char *letra = cad;
    while(*cad != '\0')
    {
        if(*cad == c)
        {
            letra = cad;
            encontro++;
        }
        cad++;
    }
    if(encontro != 0)
    {
        return letra;
    }
    else
    {
        return NULL;
    }
}

