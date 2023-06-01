#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
/*
#define TAM 100

///Version estatica
typedef struct
{
    int vec[TAM];
    int ce;
}t_vector;


void crear_vector(t_vector *vec);
int vector_lleno(t_vector *vec);
int vector_vacio(t_vector *vec);
void insertar_en_orden(t_vector *vec, int elemento);
void eliminar_elemento(t_vector *vec, int elemento);
void destruir_vector(t_vector *vec);
void mostrar_vector(t_vector *vec);




*/
///Version dinamica
typedef struct
{
    int *elementos;
    int capacidad;
    int ce;
}t_vector;


void crear_vector(t_vector *vec, int capacidad);
int vector_lleno(t_vector *vec);
int vector_vacio(t_vector *vec);
void insertar_en_orden(t_vector *vec, int elemento);
void eliminar_elemento(t_vector *vec, int elemento);
void destruir_vector(t_vector *vec);
void mostrar_vector(t_vector *vec);


#endif // HEADER_H_INCLUDED
