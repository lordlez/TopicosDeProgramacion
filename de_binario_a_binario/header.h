#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dni;
    char nombre[30];
    float promedio;
}t_alumno;

int crear_binario_inicio(char *ruta);
int pasar_a_texto_fijo(char *rutaBin, char *rutaTxtFijo);
int pasar_a_texto_fijo(char *rutaBin, char *rutaTxtFijo);
int pasar_a_texto_variable(char *rutaTxtFijo, char *rutaTxtVariable);
int crear_binario_fin(char *rutaTxtVariable, char *rutaBinFin);
int leer_binario(char *ruta);
void mostrar_alumno(t_alumno *emp);


#endif // HEADER_H_INCLUDED
