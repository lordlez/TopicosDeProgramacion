#include "header.h"

int crear_archivo(char *nombreArchivo)
{
    t_empleado vectorEmpleados[] = {
                                    {1111, "Persona Uno", 'A', {1,1,2001},250},
                                    {2222, "Persona Dos", 'B', {2,2,2002},260},
                                    {3333, "Persona Tres", 'C', {3,3,2003},270},
                                    {4444, "Persona Cuatro", 'A', {4,4,2004},280},
                                    {5555, "Persona Cinco", 'B', {5,5,2005},290}
                                    };

    FILE *pf;
    pf = fopen(nombreArchivo, "wb");
    if(pf == NULL)
        return -1;

    fwrite(vectorEmpleados, sizeof(vectorEmpleados), 1, pf);
    fclose(pf);
    return 0;
}


int leer_archivo(char *nombreArchivo)
{
    t_empleado emp;
    FILE *pf;
    pf = fopen(nombreArchivo, "rb");
    if(pf == NULL)
        return -1;

    fread(&emp, sizeof(t_empleado), 1, pf);
    while(!feof(pf))
    {
        mostrar_empleado(&emp);
        fread(&emp, sizeof(t_empleado), 1, pf);
    }

    fclose(pf);
    return 0;
}


void mostrar_empleado(const t_empleado *emp)
{
    printf("Dni: %ld", emp->dni);
    printf("\nNombre y Apellido: %s", emp->apyn);
    printf("\nCategoria: %d", emp->categoria);
    printf("\nFecha dia: %d", emp->fechIngreso.dia);
    printf("\nFecha mes: %d", emp->fechIngreso.mes);
    printf("\nFecha anio: %d", emp->fechIngreso.anio);
    printf("\nSueldo: %.2f", emp->sueldo);
}
