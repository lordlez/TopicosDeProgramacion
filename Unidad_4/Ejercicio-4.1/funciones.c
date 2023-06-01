#include "header.h"

int es_fecha_valida(t_fecha fecha){
    if(fecha.anio >= ANIO_BASE){
        if(fecha.mes >= 1 && fecha.mes <= 12){
            if(fecha.dia >= 1 && fecha.dia <= cantidad_dias_mes(fecha.mes, fecha.anio)){
                return VERDADERO;
            }
        }
    }
    return FALSO;
}


int es_bisiesto(int anio){
    return (anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0;
}


int cantidad_dias_mes(int mes, int anio){
    int cdm[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(mes == 2 && es_bisiesto(anio)){
        return 29;
    }
    return cdm[mes-1];
}

int continuar(char *mensaje){
    char respuesta;
    puts(mensaje);
    scanf(" %c", &respuesta);
    respuesta = tolower(respuesta);
    while(respuesta != 's' && respuesta != 'n'){
        puts("Respuesta invalida\n");
        puts(mensaje);
        fflush(stdin);
        scanf("%c", &respuesta);
        respuesta = tolower(respuesta);
    }
    return respuesta == 's';
}
