#include "header.h"

int main()
{
    t_persona *persona;
    int i;

    persona = (t_persona*)malloc(sizeof(t_persona)*2);
    if(persona == NULL)
    {
        printf("No se pudo reservar memoria.");
        return 1;
    }

    for(i=0;i<2;i++)
    {
        printf("Ingrese nombre: ");
        scanf("%s", (persona+i)->nombre);
        printf("Ingrese edad: ");
        scanf("%d", &(persona+i)->edad);
        printf("Ingrese salario: ");
        scanf("%f", &(persona+i)->salario);
        printf("Ingrese sexo: ");
        scanf(" %c", &(persona+i)->sexo);
    }

    printf("\nDatos: ");
    for(i=0;i<2;i++)
    {
        printf("Nombre: %s\n", (persona+i)->nombre);
        printf("Edad: %d\n", (persona+i)->edad);
        printf("Salario: %.2f\n", (persona+i)->salario);
        printf("Sexo: %c\n", (persona+i)->sexo);
    }

    free(persona);
    persona = NULL;

    return 0;
}
