#include "header.h"

int main()
{
    int *pEnteros;
    int cantidad, i;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &cantidad);

    pEnteros = (int*)malloc(sizeof(int)*cantidad);
    if(pEnteros == NULL)
    {
        printf("No se pudo reservar memoria.");
        return 1;
    }

    for(i=0;i<cantidad;i++)
    {
        *(pEnteros+i) = i+1;
    }

    printf("Elementos: ");
    for(i=0;i<cantidad;i++)
    {
        printf("%d, ", *(pEnteros+i));
    }

    free(pEnteros);
    pEnteros = NULL;

    return 0;
}
