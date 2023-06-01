#include "header.h"

int main()
{
    t_fecha fecha;
    int dias;

    printf("Ingrese una fecha (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);
    printf("Ingrese los dias a sumarle a la fecha: ");
    scanf("%d", &dias);

    if(es_fecha_valida(fecha)){
        suma_n_dias_despues(fecha, dias);
    }else{
        printf("La fecha ingresada no es valida");
    }

    return 0;
}
