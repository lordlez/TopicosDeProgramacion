#include "header.h"

int main()
{
    char ruta[] = "alumnos.bat";
    int error = 1;

    /*
    if(!(abrir_archivo(ruta, error)))
    {
        printf("\nNo se pudo");
    }
    else
    {
        printf("\nSe pudo");
    }
    */

    ABRIR_ARCHIVO(ruta, error);

    return 0;
}
