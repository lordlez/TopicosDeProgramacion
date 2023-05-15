#include "header.h"


int main()
{
    int opcion, ce;
    int maxElem = 10;
    float vec[maxElem];

    ce = cargar_vector_flotante(vec, maxElem);

    do
    {
        opcion = menu();
        switch(opcion)
        {
        case 1:
            printf("El minimo es: %.2f", minimo_elemento(vec, ce));
            break;
        case 2:
            printf("El promedio de las posiciones pares es: %.2f", promedio_pares(vec, ce));
            break;
        case 3:
            invertir_vector(vec, ce);
            mostrar_vector(vec, ce);
            break;
        case 4:
            escribir_texto(vec, ce);
            break;
        case 5:
            break;
        }
        printf("\n");
    }
    while(opcion != 5);


    return 0;
}
