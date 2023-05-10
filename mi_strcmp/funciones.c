#include "header.h"

int mi_strcmp(const char *cad1, const char *cad2)
{
    while(*cad1 != '\0' && *cad2 != '\0')
    {
        if(*cad1 < *cad2)
        {
            return MENOR;
        }else
        {
            if(*cad1 > *cad2)
            {
                return MAYOR;
            }
        }
        cad1++;
        cad2++;
    }
    if(*cad1 == '\0' && *cad2 == '\0')
    {
        return IGUAL;
    }else
    {
        if(*cad1 == '\0')
        {
            return MENOR;
        }else
        {
            return MAYOR;
        }
    }
}

