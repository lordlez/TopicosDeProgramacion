#include "header.h"

int main()
{
    t_fecha fecha;
    int dias;

    printf("Ingrese una fecha dd/mm/aaaa: ");
    scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);
    printf("\nIngrese la cantidad de dias a restarle a la fecha: ");
    scanf("%d", &dias);

    if(es_fecha_valida(fecha))
    {
        restar_n_dias(fecha, dias);
    }
    else
    {
        printf("\nLa fecha ingresada no es valida");
    }


    return 0;
}
