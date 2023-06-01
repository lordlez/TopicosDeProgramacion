#include "header.h"

int cargar_archivo(char *ruta)
{
    t_producto productos[10] =
    {
        {"0", "Prod A", 50, 100},
        {"1", "Prod B", 100, 150},
        {"2", "Prod C", 150, 200},
        {"3", "Prod D", 200, 250},
        {"4", "Prod E", 250, 300},
        {"5", "Prod F", 300, 350},
        {"6", "Prod G", 350, 400},
        {"7", "Prod H", 400, 450},
        {"8", "Prod I", 450, 500},
        {"9", "Prod J", 500, 550}
    };

    FILE *pf;
    pf=fopen(ruta, "wb");
    if(pf==NULL)
    {
        return -1;
    }

    fwrite(productos, sizeof(productos), 1, pf);
    fclose(pf);
    return 1;
}


int actualizar_archivo(char *ruta)
{
    t_producto prod;
    float plus;


    FILE *pf2;
    pf2=fopen(ruta, "r+b");
    if(pf2==NULL)
    {
        return -2;
    }
    plus = 1.1;

    fread(&prod, sizeof(t_producto), 1, pf2);
    while(!feof(pf2))
    {
        printf("Precio antiguo: %.2f", prod.precio);
        printf("\n");
        prod.precio *= plus;
        printf("Precio nuevo: %.2f", prod.precio);
        printf("\n");
        fseek(pf2, -sizeof(t_producto), SEEK_CUR);
        fwrite(&prod, sizeof(t_producto), 1, pf2);
        fseek(pf2, 0L, SEEK_CUR);
        fread(&prod, sizeof(t_producto), 1, pf2);
    }
    fclose(pf2);
    return 1;
}


