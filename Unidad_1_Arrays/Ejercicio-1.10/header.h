#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define FIL 5
#define COL 5

float sumar_superior_diag_principal(float mat[][COL]);
float sumar_superior_diag_secundaria(float mat[][COL]);
float sumar_superior_diag_principal_incluida(float mat[][COL]);
float sumar_superior_diag_secundaria_incluida(float mat[][COL]);

float sumar_inferior_diag_principal(float mat[][COL]);
float sumar_inferior_diag_secundaria(float mat[][COL]);
float sumar_inferior_diag_principal_incluida(float mat[][COL]);
float sumar_inferior_diag_secundaria_incluida(float mat[][COL]);

#endif // HEADER_H_INCLUDED
