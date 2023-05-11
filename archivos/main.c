#include <stdio.h>
#include <stdlib.h>

int main()
{

    ///Ejemplo de apertura y cierre de un archivo
    FILE *pf;
    pf = fopen("archivos.bat", "wb");
    if(pf == NULL)
    {
        printf("No se pudo abrir el archivo");
        return 1;
    }


    fclose(pf);




    return 0;
}
