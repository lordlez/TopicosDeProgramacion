#include "header.h"

int abrir_archivo(const char *ruta, int error)
{
    FILE *pf;
    pf = fopen(ruta, "rb");
    if(pf == NULL)
    {
        if(error)
        {
            fprintf(stdout, "\nNo se pudo abrir el archivo: %s", ruta);
        }
        return 0;
    }

    fclose(pf);
    return 1;
}


