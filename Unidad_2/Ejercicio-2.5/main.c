#include "header.h"

int main()
{
    char cad1[] = "masa";
    char cad2 [] = "gato";

    printf("Cad1 antes del memmove: %s", cad1);

    mi_memmove(cad1, cad2, sizeof(cad2[0]*3));

    printf("\nCad1 despues del memmove: %s", cad1);

    return 0;
}
