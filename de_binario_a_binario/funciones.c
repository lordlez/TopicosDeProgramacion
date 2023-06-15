#include "header.h"

int crear_binario_inicio(char *ruta)
{
    t_alumno alumnos[] = {
        {1,"A", 7},
        {2, "B", 9},
        {3, "C", 8}
    };

    FILE *pf;
    pf = fopen(ruta, "wb");
    if(pf==NULL)
    {
        return -1;
    }
    fwrite(alumnos, sizeof(alumnos), 1, pf);
    fclose(pf);
    return 1;
}


int pasar_a_texto_fijo(char *rutaBin, char *rutaTxtFijo)
{
    t_alumno alu;
    FILE *pf_bin;
    FILE *pf_txt;

    pf_bin = fopen(rutaBin, "rb");
    if(pf_bin == NULL)
    {
        return -1;
    }

    pf_txt = fopen(rutaTxtFijo, "wt");
    if(pf_txt == NULL)
    {
        fclose(pf_bin);
        return -2;
    }

    fread(&alu, sizeof(t_alumno), 1, pf_bin);
    while(!feof(pf_bin))
    {
        //en el fprintf uso un formateo de datos ya que voy a escribir en un txt fijo
        fprintf(pf_txt,"%4d%-5s%08.2f\n", alu.dni, alu.nombre, alu.promedio);
        fread(&alu, sizeof(t_alumno), 1, pf_bin);
    }
    fclose(pf_bin);
    fclose(pf_txt);

    return 1;
}


int pasar_a_texto_variable(char *rutaTxtFijo, char *rutaTxtVariable)
{
    t_alumno alu;
    FILE *pf_fijo;
    FILE *pf_variable;

    pf_fijo = fopen(rutaTxtFijo, "rt");
    if(pf_fijo == NULL)
    {
        return -1;
    }

    pf_variable = fopen(rutaTxtVariable, "wt");
    if(pf_variable == NULL)
    {
        fclose(pf_fijo);
        return -2;
    }
    //en el formateo del fscanf con un txt fijo, debo eliminar los simbolos "-" y "."
    while(fscanf(pf_fijo,"%4d%5s%f\n",&alu.dni, alu.nombre, &alu.promedio)!=EOF)
    {
        //en el fprintf no uso el & en las variables
        fprintf(pf_variable,"%d|%s|%.2f\n",alu.dni, alu.nombre, alu.promedio);
    }
    fclose(pf_fijo);
    fclose(pf_variable);

    return 1;
}


int crear_binario_fin(char *rutaTxtVariable, char *rutaBinFin)
{
    t_alumno alu;
    FILE *pf_variable, *pf_bin;

    pf_variable = fopen(rutaTxtVariable, "rt");
    if(pf_variable == NULL)
    {
        return -1;
    }

    pf_bin = fopen(rutaBinFin, "wb");
    if(pf_bin == NULL)
    {
        fclose(pf_variable);
        return -2;
    }
    //en el fscanf de un txt variable (para luego grabar en un binario) debo en el formateo usar "[^|\n] en el campo de %s borrando la s"
    //para eliminar el | y el \n
    while(fscanf(pf_variable,"%d|%[^|\n]|%f\n",&alu.dni, alu.nombre, &alu.promedio)!=EOF)
    {
        fwrite(&alu, sizeof(t_alumno), 1, pf_bin);
    }
    fclose(pf_variable);
    fclose(pf_bin);

    return 1;
}


int leer_binario(char *ruta)
{
    t_alumno alu;
    FILE *pf;

    pf=fopen(ruta, "rb");
    if(pf == NULL)
    {
        return -1;
    }

    fread(&alu, sizeof(t_alumno), 1, pf);
    while(!feof(pf))
    {
        mostrar_alumno(&alu);
        fread(&alu, sizeof(t_alumno), 1, pf);
    }

    fclose(pf);

    return 1;
}

void mostrar_alumno(t_alumno *alu)
{
    printf("DNI: %d\n", alu->dni);
    printf("NOMBRE: %s\n", alu->nombre);
    printf("PROMEDIO: %.2f\n", alu->promedio);
}





