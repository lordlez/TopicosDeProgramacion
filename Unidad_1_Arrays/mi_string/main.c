#include "header.h"

int main()
{
    char cad1[100];
    char cad2[] = "musica";

    mi_strcpy(cad1, cad2);

    printf("Cad1 = %s", cad1);
    printf("\nCad2 = %s", cad2);

    return 0;
}
