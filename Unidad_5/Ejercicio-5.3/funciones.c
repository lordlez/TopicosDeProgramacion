#include "header.h"

int crear_archivo(const char *ruta)
{
    int numero, i=0;
    int numerosPorLinea;
    FILE *pf;
    pf = fopen(ruta, "wt");
    if(pf == NULL)
    {
        printf("\nNo se pudo abrir el archivo");
        return 0;
    }

    printf("Ingrese numeros (rango permitido: %d a %d). Ingrese -666 para salir.\n", MIN, MAX);

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    numerosPorLinea = (rand()%7)+1;
    while(numero != -666)
    {
        if(numero > MIN && numero < MAX)
        {
            if(i<numerosPorLinea)
            {
                fprintf(pf, "%5d ", numero);
                i++;
            }
        }
        else
        {
            printf("\nEl numero elegido no entra en el rango permitido. Elija otro numero por favor");
        }

        if(i==numerosPorLinea)
        {
            numerosPorLinea = (rand()%7)+1;
            fprintf(pf, "\n");
            i = 0;
        }

        printf("\nIngrese un numero: ");
        scanf("%d", &numero);

    }

    fclose(pf);
    return 1;
}










