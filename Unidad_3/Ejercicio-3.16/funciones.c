#include "header.h"

void *buscar_menor_generico(void *vec, size_t cantE, size_t tamE, int(*comparar)(const void *, const void *))
{
    void *fin = vec+(cantE-1)*tamE;
    void *menor = vec;
    vec+=tamE;
    while(vec<=fin)
    {
        if(comparar(vec, menor)<0)
        {
            menor = vec;
        }
        vec+=tamE;
    }
    return menor;
}

int comparar_enteros(const void *e1, const void *e2)
{
    int *num1 = (int*)e1;
    int *num2 = (int*)e2;
    return *num1-*num2;
}

int comparar_flotantes(const void *e1, const void *e2)
{
    float *num1 = (float*)e1;
    float *num2 = (float*)e2;
    if(*num1-*num2 < 0)
    {
        return -1;
    }else
    {
        if(*num1-*num2 > 0)
        {
            return 1;
        }else
        {
            return 0;
        }
    }
}

int comparar_alumno_dni(const void *e1, const void *e2)
{
    t_alumno *p1 = (t_alumno*)e1;
    t_alumno *p2 = (t_alumno*)e2;

    return p1->dni - p2->dni;
}


int comparar_alumno_nom(const void *e1, const void *e2)
{
    t_alumno *p1 = (t_alumno*)e1;
    t_alumno *p2 = (t_alumno*)e2;

    return strcmpi(p1->nombre, p2->nombre);
}


int comparar_alumno_ape(const void *e1, const void *e2)
{
    t_alumno *p1 = (t_alumno*)e1;
    t_alumno *p2 = (t_alumno*)e2;

    return strcmpi(p1->apellido, p2->apellido);
}

int comparar_alumno_prom(const void *e1, const void *e2)
{
    t_alumno *p1 = (t_alumno*)e1;
    t_alumno *p2 = (t_alumno*)e2;

    if((p1->promedio - p2->promedio)<0)
    {
        return -1;
    }
    else
    {
        if((p1->promedio - p2->promedio) > 0)
        {
            return 1;
        }else
        {
            return 0;
        }
    }
}


