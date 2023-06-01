#include "header.h"

int cargar_archivo1(char *ruta)
{
    t_empleados empleado[] =
    {
        {15, "A", "A", 1200},
        {40, "A", "A", 650},
        {10, "B", "C", 850},
        {20, "B", "C", 340},
        {8, "W", "M", 475}
    };

    FILE *pf;
    pf=fopen(ruta, "wb");
    if(pf == NULL)
    {
        return -1;
    }
    fwrite(empleado, sizeof(empleado), 1, pf);
    fclose(pf);
    return 1;
}

int cargar_archivo2(char *ruta)
{
    t_estudiantes estudiante[] =
    {
        {5, "A", "A", 10},
        {15, "A", "A", 3},
        {70, "B", "A", 9},
        {10, "B", "C", 8},
        {20, "B", "C", 8},
        {60, "J", "P", 5},
        {6, "W", "M", 2}

    };
    FILE *pf;
    pf=fopen(ruta, "wb");
    if(pf == NULL)
    {
        return -1;
    }
    fwrite(estudiante, sizeof(estudiante), 1, pf);
    fclose(pf);
    return 1;
}
