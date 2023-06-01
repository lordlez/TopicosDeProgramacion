#include "header.h"

int es_fecha_valida(t_fecha fecha)
{
    if(fecha.anio >= ANIO_BASE)
    {
        if(fecha.mes >= 1 && fecha.mes <= 12)
        {
            if(fecha.dia >= 1 && fecha.dia <= cantidad_dias_mes(fecha.mes, fecha.anio))
            {
                return VERDADERO;
            }
        }
    }
    return FALSO;
}


int cantidad_dias_mes(int mes, int anio)
{
    int cdm[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(mes == 2 && es_bisiesto(anio))
    {
        return 29;
    }
    return cdm[mes-1];
}


int es_bisiesto(int anio)
{
    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
    {
        return VERDADERO;
    }
    return FALSO;
}


void dia_despues(t_fecha fecha)
{
    fecha.dia+=1;
    if(fecha.dia > cantidad_dias_mes(fecha.mes, fecha.anio))
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
