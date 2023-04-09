#include "header.h"

int main()
{
    t_fecha fecha;

    do
    {
        printf("Ingrese una fecha (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);

        if(esFechaValida(fecha))
        {
            printf("La fecha ingresada es valida\n");
        }
        else
        {
            printf("La fecha ingresa no es valida\n");
        }
    }
    while(continuar("Desea ingresar otra fecha? (s/n): "));

    return 0;
}
