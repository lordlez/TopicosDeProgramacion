#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIL 30
#define COL 30

int cargar_cadenas(char mat[][COL]);
void mostrar_matriz(char mat[][COL], int ce);
int mi_strcmpi(char *s1, char *s2);
int mi_tolower(int ch);
char *mi_strcpy(char *s1, const char *s2);
size_t mi_strlen(const char *s);

#endif // HEADER_H_INCLUDED
