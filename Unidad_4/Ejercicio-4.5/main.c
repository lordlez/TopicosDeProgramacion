#include "header.h"

int main()
{
    t_fecha fecha1;
    t_fecha fecha2;

    printf("Ingrese la primer fecha (la mayor) dd/mm/aaaa: ");
    scanf("%d/%d/%d", &fecha1.dia, &fecha1.mes, &fecha1.anio);
    printf("\nIngrese la segunda fecha (la menor) dd/mm/aaaa: ");
    scanf("%d/%d/%d", &fecha2.dia, &fecha2.mes, &fecha2.anio);

    if(es_fecha_valida(fecha1) && es_fecha_valida(fecha2))
    {
        dias_entre_fechas(fecha1, fecha2);
    }else
    {
        printf("\nFecha/s Incorrecta/s");
    }





    return 0;
}
