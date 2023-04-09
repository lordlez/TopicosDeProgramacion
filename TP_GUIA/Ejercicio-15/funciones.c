#include "header.h"

int esFechaValida(t_fecha fecha)
{
    if(fecha.anio >= ANIO_BASE)
    {
        if(fecha.mes >= 1 && fecha.mes <= 12)
        {
            if(fecha.dia >= 1 && fecha.dia <= cantidadDiasMes(fecha.mes, fecha.anio))
            {
                return VERDADERO;
            }
        }
    }
    return FALSO;
}


int cantidadDiasMes(int mes, int anio)
{
    int cdm[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(mes == 2 && esBisiesto(anio))
    {
        return 29;
    }
    return cdm[mes-1];
}


int esBisiesto(int anio)
{
    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
    {
        return VERDADERO;
    }
    return FALSO;
}


void diaDespues(t_fecha fecha)
{
    /*
    fecha.dia += 1;
    if(fecha.dia > 31)
    {
        fecha.dia = 1;
        fecha.mes += 1;
        if(fecha.mes > 12)
        {
            fecha.mes = 1;
            fecha.anio += 1;
        }
    }else if(fecha.dia > 28 && fecha.mes == 2 && !esBisiesto(fecha.anio))
    {
        fecha.dia = 1;
        fecha.mes += 1;
    }else if(fecha.dia > 30 && (fecha.mes == 4 || fecha.mes == 6 || fecha.mes == 9 || fecha.mes == 11))
    {
        fecha.dia = 1;
        fecha.mes += 1;
    }
    */
    fecha.dia+=1;
    if(fecha.dia > cantidadDiasMes(fecha.mes, fecha.anio))
    {
        fecha.dia = 1;
        fecha.mes += 1;
        if(fecha.mes > 12)
        {
            fecha.mes = 1;
            fecha.anio += 1;
        }
    }

    printf("El dia despues de la fecha ingresada es: %d/%d/%d", fecha.dia, fecha.mes, fecha.anio);
}

