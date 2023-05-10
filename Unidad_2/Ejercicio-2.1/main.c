#include "header.h"

int main()
{
    int *pEnteros;
    int i, numero;
    pEnteros = (int*)malloc(sizeof(int)*3);
    if(pEnteros == NULL)
        return 1;

    for(i=0; i<3; i++)
    {
        printf("Ingrese elemento: ");
        scanf("%d", &numero);
        *(pEnteros+i) = numero;
    }

    printf("\nValores ingresados: \n");

    for(i=0;i<3;i++)
    {
        printf("%d, ", *(pEnteros+i));
    }

    free(pEnteros);
    pEnteros = NULL;

    return 0;
}
