#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024

int cargar_archivo( char *ruta);
int leer_archivo(char *ruta);
int cantidad_palabras(char *cad);
char *palabra_mas_larga(char *cad);


#endif // HEADER_H_INCLUDED
