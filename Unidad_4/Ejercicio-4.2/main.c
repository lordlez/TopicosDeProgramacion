#include "header.h"

int main()
{
    t_fecha fecha;

    printf("Ingrese una fecha (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);

    if(es_fecha_valida(fecha)){
        dia_despues(fecha);
    }else{
        printf("La fecha ingresada no es valida");
    }


    return 0;
}
