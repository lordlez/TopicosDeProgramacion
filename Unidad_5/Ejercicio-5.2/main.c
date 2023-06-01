#include "header.h"

int main()
{
    char cad[] = "hola mundo.";
    char cad1[100];
    int repetido, palabras, longitud;

    primera_palabra(cad, cad1);
    printf("\nLa primera palabra es: %s", cad1);

    repetido = repeticiones(cad, cad1);
    printf("\nLa primera palabra se repite %d veces", repetido);

    palabras = cantidad_palabras(cad);
    printf("\nEl texto tiene un total de %d palabras", palabras);

    longitud = palabra_mas_larga(cad);
    printf("\nLa longitud de la palabra mas larga es: %d", longitud);

    return 0;
}
