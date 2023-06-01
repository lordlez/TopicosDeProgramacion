#include "header.h"

/*
///Version estatica
void crear_vector(t_vector *vec)
{
    vec->ce = 0;
}

int vector_lleno(t_vector *vec)
{
    if(vec->ce == TAM)
    {
        return 1;
    }
    return 0;
}

int vector_vacio(t_vector *vec)
{
    if(vec->ce == 0)
    {
        return 1;
    }
    return 0;
}


void insertar_en_orden(t_vector *vec, int elemento)
{
    if(!(vector_lleno(vec)))
    {
        int i = vec->ce - 1;
        while(i>=0 && vec->vec[i]>elemento)
        {
            vec->vec[i+1] = vec->vec[i];
            i--;
        }
        vec->vec[i+1] = elemento;
        vec->ce++;
    }else
    {
        printf("\nNo se pudo insertar elemento, vector lleno");
    }
}


void eliminar_elemento(t_vector *vec, int elemento)
{
    if(!(vector_vacio(vec)))
    {
        int i = 0;
        while(i < vec->ce)
        {
            if(vec->vec[i] == elemento)
            {
                while(i < vec->ce-1)
                {
                    vec->vec[i] = vec->vec[i+1];
                    i++;
                }
                vec->ce--;
                i=vec->ce;
            }
            i++;
        }
    }else
    {
        printf("\nNo se pudo eliminar elemento, el vector esta vacio");
    }

}


void destruir_vector(t_vector *vec)
{
    vec->ce = 0;
}


void mostrar_vector(t_vector *vec)
{
    int i;
    for(i=0; i<vec->ce; i++)
    {
        printf("\n%d,", vec->vec[i]);
    }
}



*/
///Version dinamica
void crear_vector(t_vector *vec, int capacidad)
{
    vec->elementos = (int*)malloc(sizeof(int)*capacidad);
    vec->capacidad = capacidad;
    vec->ce = 0;
}

int vector_lleno(t_vector *vec)
{
    if(vec->ce == vec->capacidad)
    {
        return 1;
    }
    return 0;
}

int vector_vacio(t_vector *vec)
{
    if(vec->ce == 0)
    {
        return 1;
    }
    return 0;
}


void insertar_en_orden(t_vector *vec, int elemento)
{
    if(!(vector_lleno(vec)))
    {
        int i = vec->ce - 1;
        while(i>=0 && vec->elementos[i]>elemento)
        {
            vec->elementos[i+1] = vec->elementos[i];
            i--;
        }
        vec->elementos[i+1] = elemento;
        vec->ce++;
    }else
    {
        printf("\nNo se pudo insertar valor, vector lleno");
    }
}

void eliminar_elemento(t_vector *vec, int elemento)
{
    if(!(vector_vacio(vec)))
    {
        int i = 0;
        while(i < vec->ce)
        {
            if(vec->elementos[i] == elemento)
            {
                while(i < vec->ce-1)
                {
                    vec->elementos[i] = vec->elementos[i+1];
                    i++;
                }
                vec->ce--;
                i=vec->ce;
            }
            i++;
        }
    }else
    {
        printf("\nNo se pudo eliminar elemento, el vector esta vacio");
    }
}


void destruir_vector(t_vector *vec)
{
    free(vec->elementos);
    vec->ce = 0;
}

void mostrar_vector(t_vector *vec)
{
    int i;
    for(i=0; i<vec->ce; i++)
    {
        printf("\n%d,", vec->elementos[i]);
    }
}




