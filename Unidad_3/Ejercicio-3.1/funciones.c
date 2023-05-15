#include "header.h"

int menu()
{
    int opcion;
    printf("Menu de opciones: ");
    do
    {
        printf("\n1- Buscar el minimo elemento");
        printf("\n2- Calcular el promedio de los valores de las posiciones pares");
        printf("\n3- Mostrarlo en orden inverso");
        printf("\n4- Escribir vector en un archivo de texto");
        printf("\n5- Salir");
        printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);
        if(opcion<1 || opcion>5)
            printf("Opcion Incorrecta");
    }
    while(opcion<1 || opcion>5);

    return opcion;
}


int cargar_vector_flotante(float *vec, int maxElem)
{
    int ce = 0;
    float valor;
    printf("Cargar vector. Ingrese -1 para salir");
    printf("\nIngrese valor: ");
    scanf("%f", &valor);
    while(ce < maxElem && valor != -1)
    {
        *vec = valor;
        vec++;
        ce++;
        printf("Ingrese valor: ");
        scanf("%f", &valor);
    }
    return ce;
}


float minimo_elemento(float *vec, int ce)
{
    float min = *vec;
    int i;
    vec++;
    for(i=1;i<ce;i++)
    {
        if(*vec < min)
            min = *vec;
        vec++;
    }
    return min;
}



float promedio_pares(float *vec, int ce)
{
    int i, suma = 0, contador = 0;
    float prom;
    vec+=2;
    for(i=2;i<ce;i+=2)
    {
        suma += *vec;
        contador++;
        vec+=2;
    }
    prom = suma / contador;
    return prom;
}

void invertir_vector(float *vec, int ce)
{
    float aux;
    float *fin = vec+(ce-1);
    while(vec<fin)
    {
        aux = *fin;
        *fin = *vec;
        *vec = aux;
        vec++;
        fin--;
    }
}

void mostrar_vector(float *vec, int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        printf("%.2f, ", *vec);
        vec++;
    }
}


int escribir_texto(float *vec, int ce)
{
    int i;
    FILE *pf;
    pf = fopen("vector.txt", "wt");
    if(pf==NULL)
    {
        printf("No se pudo abrir el archivo");
        return -1;
    }

    for(i=0;i<ce;i++)
    {
        fprintf(pf, "%.2f\n",*vec);
        vec++;
    }

    fclose(pf);

    return 1;
}













