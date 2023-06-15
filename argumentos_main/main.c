#include "header.h"

int main(int argc, char *argv[])
{
    char ruta[] = "empleados.dat";
    char ruta2[] = "empleados_actu.dat";
    float porcentaje;

    if(argc<3)
    {
        return -1;
    }

    porcentaje = atof(argv[3]);

    crear_archivo(ruta);
    crear_archivo_vacio(ruta2);
    actualizar_archivo(ruta, ruta2, porcentaje);
    puts(argv[0]);
    puts(argv[1]);
    puts(argv[2]);
    puts(argv[3]);
    leer_archivo(ruta2);


    return 0;
}
