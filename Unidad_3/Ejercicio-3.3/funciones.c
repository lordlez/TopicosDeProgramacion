#include "header.h"

void cargar_vector_enteros(int *vec, int maxTam, int *ce)
{
    int valor;
    printf("Ingrese valores. Ingrese -1 para dejar de cargar");
    printf("\nvalor: ");
    scanf("%d", &valor);
    while(*ce <= maxTam && valor != -1)
    {
        *vec = valor;
        (*ce)++;
        vec++;
        printf("valor: ");
        scanf("%d", &valor);
    }
}


float promedio_y_suma(int *vec, int ce, long int *suma)
{
    int *fin = vec+(ce-1);
    float promedio;
    int contador = 0;
    while(vec<=fin)
    {
        (*suma) += *vec;
        contador++;
        vec++;
    }
    promedio = (*suma) / contador;
    return promedio;
}


t_valores prom_y_sum(int *vec, int ce)
{
    t_valores val;
    val.sum = 0;
    int contador = 0;
    int *fin = vec+(ce-1);
    while(vec<=fin)
    {
        val.sum+= *vec;
        contador++;
        vec++;
    }
    val.pro = val.sum / contador;
    return val;
}
