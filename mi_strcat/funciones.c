#include "header.h"

char *mi_strcat(char *cad1, const char *cad2)
{
    char *inicioCad1 = cad1;
    //me pongo en la posicion \0 de cad1
    while(*cad1 != '\0')
    {
        cad1++;
    }


    //comienzo a copiar de cad2 a cad1
    while(*cad2 != '\0')
    {
        *cad1 = *cad2;
        cad1++;
        cad2++;
    }

    //incluyo el \0 al final de cad1
    *cad1 = *cad2; // *cad1 = '\0';

    return inicioCad1;
}


