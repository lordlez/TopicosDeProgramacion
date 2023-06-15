#include "header.h"


int crear_archivo(char *ruta)
{
    t_empleado empleados[] =
    {
        {1, "A", 50},
        {2, "B", 150},
        {3, "C", 200}
    };

    FILE *pf;
    pf = fopen(ruta, "wb");
    if(pf == NULL)
    {
        return -1;
    }
    fwrite(empleados, sizeof(empleados), 1, pf);
    fclose(pf);
    return 1;
}


int crear_archivo_vacio(char *ruta)
{
    FILE *pf;
    pf=fopen(ruta, "wb");
    if(pf==NULL)
    {
        return -1;
    }
    fclose(pf);
    return 1;
}


int actualizar_archivo(char *ruta, char *ruta2, float porcentaje)
{
    t_empleado emp;
    FILE *pf, *pf_actu;

    pf = fopen(ruta, "rb");
    if(pf==NULL)
    {
        return -1;
    }
    pf_actu = fopen(ruta2, "wb");
    if(pf_actu == NULL)
    {
        fclose(pf);
        return -2;
    }

    fread(&emp, sizeof(t_empleado), 1, pf);
    while(!feof(pf))
    {
        emp.sueldo *= porcentaje;
        fwrite(&emp,sizeof(t_empleado),1,pf_actu);
        fread(&emp, sizeof(t_empleado), 1, pf);
    }

    fclose(pf);
    fclose(pf_actu);
    return 1;
}


int leer_archivo(char *ruta)
{
    t_empleado emp;
    FILE *pf;
    pf=fopen(ruta, "rb");
    if(pf==NULL)
    {
        return -1;
    }
    fread(&emp, sizeof(t_empleado),1, pf);
    while(!feof(pf))
    {
        printf("DNI: %d, APELLIDO: %s, SUELDO: %.2f\n", emp.dni, emp.apyn, emp.sueldo);
        fread(&emp, sizeof(t_empleado),1,pf);
    }
    fclose(pf);
    return 1;
}

