#include "header.h"

int main()
{
    FILE *pf1, *pf2, *pfr;
    t_empleados emp;
    t_estudiantes est;
    float plus;

    cargar_archivo1("empleado.dat");
    cargar_archivo2("estudiante.dat");

    pf1 = fopen("empleado.dat", "rb");
    if(pf1==NULL)
    {
        return -1;
    }

    pf2 = fopen("estudiante.dat", "rb");
    if(pf2 == NULL)
    {
        fclose(pf1);
        return -2;
    }

    pfr = fopen("empleado_actualizado.dat", "wb");
    if(pfr == NULL)
    {
        fclose(pf1);
        fclose(pf2);
        return -3;
    }

    fread(&emp, sizeof(t_empleados), 1, pf1);
    fread(&est, sizeof(t_estudiantes), 1, pf2);

    while(!feof(pf1) && !feof(pf2))
    {
        if(strcmpi(emp.apellido, est.apellido)==0)
        {
            if(strcmpi(emp.nombre, est.nombre)==0)
            {
                if(emp.dni == est.dni)
                {
                    if(est.promedio > 7)
                    {
                        plus = (emp.sueldo * 7.28)/100;
                        emp.sueldo += plus;
                        fwrite(&emp, sizeof(t_empleados), 1, pfr);
                        fread(&emp, sizeof(t_empleados), 1, pf1);
                        fread(&est, sizeof(t_estudiantes), 1, pf2);
                    }else
                    {
                        fwrite(&emp, sizeof(t_empleados), 1, pfr);
                        fread(&emp, sizeof(t_empleados), 1, pf1);
                        fread(&est, sizeof(t_estudiantes), 1, pf2);
                    }
                }else
                {
                    fread(&est, sizeof(t_estudiantes), 1, pf2);
                }
            }else
            {
                if(strcmpi(emp.nombre, est.nombre)<0)
                {
                    fwrite(&emp, sizeof(t_empleados), 1, pfr);
                    fread(&emp, sizeof(t_empleados), 1, pf1);
                }else
                {
                    fread(&est, sizeof(t_estudiantes), 1, pf2);
                }
            }
        }else
        {
            if(strcmpi(emp.apellido, est.apellido)<0)
            {
                fwrite(&emp, sizeof(t_empleados), 1, pfr);
                fread(&emp, sizeof(t_empleados), 1, pf1);
            }else
            {
                fread(&est, sizeof(t_estudiantes), 1, pf2);
            }
        }
    }

    while(!feof(pf1))
    {
        fwrite(&emp, sizeof(t_empleados), 1, pfr);
        fread(&emp, sizeof(t_empleados), 1, pf1);
    }

    fclose(pf1);
    fclose(pf2);
    fclose(pfr);

    pfr = fopen("empleado_actualizado.dat", "rb");
    if(pfr==NULL)
    {
        return -5;
    }

    fread(&emp, sizeof(t_empleados), 1, pfr);
    while(!feof(pfr))
    {
        printf("APELLIDO: %s, NOMBRE: %s, DNI: %d, SUELDO: %.2f\n", emp.apellido, emp.nombre, emp.dni, emp.sueldo);
        fread(&emp, sizeof(t_empleados), 1, pfr);
    }

    fclose(pfr);

    return 0;
}
