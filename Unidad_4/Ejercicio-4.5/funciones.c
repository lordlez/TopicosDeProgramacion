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

void dias_entre_fechas(t_fecha fecha1, t_fecha fecha2)
{
//no salio xd
}






///CONVERTIR FECHA A DIAS, REVISAR Y TERMINAR
/*
    int diasFecha1 = 0;
    int diasFecha2 = 0;
    int vecBis[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int vecNoBis[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    //opcion 1) Pasar ambas fechas a dias y luego restar los dias

    //paso a dias la fecha1
    if(es_bisiesto(fecha1.anio))
    {
        for(i=1;i<fecha1.mes;i++)
        {
            diasFecha1 += vecBis[i];
        }
        diasFecha1 += fecha1.dia;
    }else
    {
        for(i=1;i<fecha1.mes;i++)
        {
            diasFecha1 += vecNoBis[i];
        }
        diasFecha1 += fecha1.dia;
    }

    //paso a dias la fecha2
    if(es_bisiesto(fecha2.anio))
    {
        for(i=1;i<=fecha2.mes;i++)
        {
            diasFecha2 += vecBis[i];
        }
        diasFecha2 -= fecha2.dia;
    }else
    {
        for(i=1;i<=fecha2.mes;i++)
        {
            diasFecha2 += vecNoBis[i];
        }
        diasFecha2 -= fecha2.dia;
    }
*/
