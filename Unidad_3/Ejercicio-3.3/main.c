#include "header.h"

int main()
{
    int maxTam = 20, ce = 0;
    int vec[maxTam];
    long int suma = 0;
    float prom;
    cargar_vector_enteros(vec, maxTam, &ce);
    prom = promedio_y_suma(vec, ce, &suma);

    printf("La suma es: %ld", suma);
    printf("\nEl promedio es: %.2f", prom);

    return 0;
}

/*
int main()
{
    int maxTam = 20, ce = 0;
    int vec[maxTam];
    t_valores val1;
    cargar_vector_enteros(vec, maxTam, &ce);
    val1 = prom_y_sum(vec, ce);
    printf("La suma es: %ld", val1.sum);
    printf("\nEl promedio es: %.2f", val1.pro);


    return 0;
}
*/
