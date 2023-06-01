#include "header.h"

int main()
{
    int cantidad;
    char palabra[] = "hola";
    char texto[] = "hola me llamo hola chau hola";

    cantidad = contar_palabra(texto, palabra);

    printf("La palabra: %s\nEn el texto: %s\nAparece: %d veces",palabra, texto, cantidad);

    return 0;
}
