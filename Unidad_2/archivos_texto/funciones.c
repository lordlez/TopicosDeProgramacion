#include "header.h"


int crear_archivo_texto_variable(char *archivoOrigen, char *archivoDestino)
{
    t_empleado emp;
    FILE *pfBin; //puntero al binario
    FILE *pfTxtLV; //puntero al texto con longitud variable

    pfBin = fopen(archivoOrigen, "rb");
    if(pfBin == NULL)
        return -1;

    pfTxtLV = fopen(archivoDestino, "wt");
    if(pfTxtLV == NULL)
    {
        fclose(pfBin);
        return -1;
    }
    //leo del archivo binario, y escribo en el de texto
    fread(&emp, sizeof(t_empleado), 1, pfBin);
    while(!feof(pfBin))
    {
        fprintf(pfTxtLV, "%ld;%s;%c;%d/%d/%d;%.2f\n",
                emp.dni,
                emp.apyn,
                emp.categoria,
                emp.fechIngreso.dia,
                emp.fechIngreso.mes,
                emp.fechIngreso.anio,
                emp.sueldo);
        fread(&emp, sizeof(t_empleado), 1, pfBin);
    }

    fclose(pfBin);
    fclose(pfTxtLV);
    return 0;
}

int leer_mostrar_archivo_texto_variable(char *nombreArchivo)
{
    char cad[100];
    FILE *pf;
    pf = fopen(nombreArchivo, "rt");
    if(pf==NULL)
        return -1;

    while(fgets(cad, sizeof(cad), pf))
    {
        printf("%s\n", cad);
    }

    fclose(pf);
    return 0;

}



