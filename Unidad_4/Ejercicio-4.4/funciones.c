#include "header.h"

int es_fecha_valida(t_fecha fecha)
{
    if(fecha.anio > ANIO_BASE)
    {
        if(fecha.mes >= 1 && fecha.mes <= 12)
        {
            if(fecha.dia >= 1 && fecha.dia <= cantidad_dias_mes(fecha.mes, fecha.anio))
            {
                return 1;
            }
        }
    }
    return 0;
}

int cantidad_dias_mes(int mes, int anio)
{
    int cdm[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(mes==2 && es_bisiesto(anio))
    {
        return 29;
    }
    return cdm[mes-1];
}

int es_bisiesto(int anio)
{
    if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
    {
        return 1;
    }
    return 0;
}

void restar_n_dias(t_fecha fecha, int dias)
{
    int i;
    for(i=0; i<dias; i++)
    {
        fecha.dia -= 1;
        if(!(fecha.dia >= 1 && fecha.dia <= cantidad_dias_mes(fecha.mes, fecha.anio)))
        {
            fecha.mes -= 1;
            if(fecha.mes == 1 || fecha.mes == 3 || fecha.mes == 5 || fecha.mes == 7 || fecha.mes == 8 || fecha.mes == 10 || fecha.mes == 12)
            {
                fecha.dia = 31;
            }else
            {
                if(fecha.mes == 4 || fecha.mes == 6 || fecha.mes == 9 || fecha.mes == 11)
                {
                    fecha.dia = 30;
                }else
                {
                    if(es_bisiesto(fecha.anio))
                    {
                        fecha.dia = 29;
                    }else
                    {
                        fecha.dia = 28;
                    }
                }
            }
            if(fecha.mes < 1)
            {
                fecha.anio -= 1;
                fecha.mes = 12;
            }
        }
    }
    printf("\nLa fecha luego de restar %d dias es: %d/%d/%d", dias, fecha.dia, fecha.mes, fecha.anio);
}





