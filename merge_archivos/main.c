#include "header.h"

int main()
{
    FILE *pf1, *pf2, *pfr;
    t_alumno alu1, alu2;

    cargar_archivo1("alu1.dat");
    cargar_archivo2("alu2.dat");

    pf1 = fopen("alu1.dat", "rb");
    if(pf1 == NULL)
    {
        return -1;
    }

    pf2 = fopen("alu2.dat", "rb");
    if(pf2 == NULL)
    {
        fclose(pf1);
        return -2;
    }

    pfr = fopen("aluRes.dat", "wb");
    if(pfr == NULL)
    {
        fclose(pf1);
        fclose(pf2);
        return -3;
    }

    ///
    ///ALGORITMO DE UNION
    ///
    fread(&alu1, sizeof(t_alumno), 1, pf1);
    fread(&alu2, sizeof(t_alumno), 1, pf2);

    while(!feof(pf1) && !feof(pf2))
    {
        if(alu1.dni < alu2.dni)
        {
            fwrite(&alu1, sizeof(t_alumno), 1, pfr);
            fread(&alu1, sizeof(t_alumno), 1, pf1);
        }else
        {
            if(alu1.dni > alu2.dni)
            {
                fwrite(&alu2, sizeof(t_alumno), 1, pfr);
                fread(&alu2, sizeof(t_alumno), 1, pf2);
            }else
            {
                fwrite(&alu1, sizeof(t_alumno), 1, pfr);
                fread(&alu1, sizeof(t_alumno), 1, pf1);
                fread(&alu2, sizeof(t_alumno), 1, pf2);
            }
        }
    }

    while(!feof(pf1))
    {
        fwrite(&alu1, sizeof(t_alumno), 1, pfr);
        fread(&alu1, sizeof(t_alumno), 1, pf1);
    }

    while(!feof(pf2))
    {
        fwrite(&alu2, sizeof(t_alumno), 1, pfr);
        fread(&alu2, sizeof(t_alumno), 1, pf2);
    }

    ///
    ///ALGORITMO DE INTERSECCION
    ///

    fread(&alu1, sizeof(t_alumno), 1, pf1);
    fread(&alu2, sizeof(t_alumno), 1, pf2);

    while(!feof(pf1) && !feof(pf2))
    {
        if(alu1.dni < alu2.dni)
        {
            fread(&alu1, sizeof(t_alumno), 1, pf1);
        }else
        {
            if(alu1.dni > alu2.dni)
            {
                fread(&alu2, sizeof(t_alumno), 1, pf2);
            }else
            {
                fwrite(&alu1, sizeof(t_alumno), 1, pfr);
                fread(&alu1, sizeof(t_alumno), 1, pf1);
                fread(&alu2, sizeof(t_alumno), 1, pf2);
            }
        }
    }

    fclose(pf1);
    fclose(pf2);
    fclose(pfr);

    pfr = fopen("aluRes.dat", "rb");
    if(pfr == NULL)
    {
        return -4;
    }
    fread(&alu1, sizeof(t_alumno), 1, pfr);
    while(!feof(pfr))
    {
        printf("\nDNI: %d, NOMBRE Y APELLIDO: %s, SEXO: %c, PROMEDIO: %.2f, FECHA DE INGRESO: %d/%d/%d, ESTADO: %c", alu1.dni, alu1.apyn, alu1.sexo, alu1.promedio, alu1.fechaIngr.dia, alu1.fechaIngr.mes, alu1.fechaIngr.anio, alu1.estado);
        fread(&alu1, sizeof(t_alumno), 1, pfr);
    }

    fclose(pfr);

    return 0;
}
