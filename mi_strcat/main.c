#include "header.h"

int main()
{
    char cad1[] = "hola ";
    char cad2[] = "campeon";

    printf("Cad1: %s", cad1);
    printf("\nCad1: %s", mi_strcat(cad1, cad2));

    return 0;
}
