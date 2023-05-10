#include "header.h"

char *mi_strchr(char *cad, int c)
{
    while(*cad != '\0')
    {
        if(*cad == c)
            return cad;
        cad++;
    }
    return NULL;
}

