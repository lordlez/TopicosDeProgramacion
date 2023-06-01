#include "header.h"

int main()
{
    char rutaBin1[] = "empleado.dat";
    char rutaBin2[] = "estudiante.dat";
    char rutaTxt1[] = "empleado.txt";
    char rutaTxt2[] = "estudiante.txt";
    char rutaTxtR[] = "actualizado.txt";
    float plus;

    FILE *pfTxt1, *pfTxt2, *pfTxtR;

    t_empleados emp[100];
    t_estudiantes est[100];

    cargar_archivo_bin1(rutaBin1);
    cargar_archivo_bin2(rutaBin2);
    cargar_archivo_txt_variable1(rutaTxt1, rutaBin1);
    cargar_archivo_txt_variable2(rutaTxt2, rutaBin2);

    pfTxt1 = fopen(rutaTxt1, "rt");
    if(pfTxt1 == NULL)
        return -1;

    pfTxt2 = fopen(rutaTxt2, "rt");
    if(pfTxt2 == NULL)
    {
        fclose(pfTxt1);
        return -2;
    }

    pfTxtR = fopen(rutaTxtR, "wt");
    if(pfTxtR == NULL)
    {
        fclose(pfTxt1);
        fclose(pfTxt2);
        return -3;
    }

    while()
    {
        if(strcmpi(emp.apellido, est.apellido)==0)
        {
            if(strcmpi(emp.nombre, est.nombre)==0)
            {
                if(emp.dni == est.dni)
                {
                    if(est.promedio >= 7)
                    {
                        plus = (emp.sueldo * 7.28) / 100;
                        emp.sueldo += plus;
                        fprintf(pfTxtR,"APELLIDO: %5s, NOMBRE: %5s, DNI: %5d, SUELDO: %.2f",emp.apellido, emp.nombre, emp.dni, emp.sueldo);
                        fgets(emp, sizeof(emp), pfTxt1);
                        fgets(&est, sizeof(t_estudiantes), pfTxt2);
                    }
                }else
                {
                    fgets(&est, sizeof(t_estudiantes), pfTxt2);
                }
            }else
            {
                if(strcmpi(emp.nombre, est.nombre)<0)
                {
                    fprintf(pfTxtR,"APELLIDO: %5s, NOMBRE: %5s, DNI: %5d, SUELDO: %.2f",emp.apellido, emp.nombre, emp.dni, emp.sueldo);
                    fgets(&emp, sizeof(t_empleados), pfTxt1);
                }else
                {
                    fgets(&est, sizeof(t_estudiantes), pfTxt2);
                }
            }
        }else
        {
            if(strcmpi(emp.apellido, est.apellido)<0)
            {
                fprintf(pfTxtR, "APELLIDO: %5s, NOMBRE: %5s, DNI: %5d, SUELDO: %.2f",emp.apellido, emp.nombre, emp.dni, emp.sueldo);
                fgets(&emp, sizeof(t_empleados), pfTxt1);
            }else
            {
                fgets(&est, sizeof(t_estudiantes), pfTxt2);
            }
        }
    }

    while(!feof(pfTxt1))
    {
        fprintf(pfTxtR,"APELLIDO: %5s, NOMBRE: %5s, DNI: %5d, SUELDO: %.2f",emp.apellido, emp.nombre, emp.dni, emp.sueldo);
        fgets(&emp, sizeof(t_empleados), pfTxt1);
    }

    fclose(pfTxt1);
    fclose(pfTxt2);
    fclose(pfTxtR);
    unlink(pfTxt2);
    rename(rutaTxtR, rutaTxt2);

    return 0;
}
