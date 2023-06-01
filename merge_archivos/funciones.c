#include "header.h"

int cargar_archivo1(char *ruta)
{
    t_alumno alumno[] =
    {
        {10, "JP", 'F', 7.5, {7,8}, {1,2,2005}, 'A'},
        {15, "MM", 'M', 8, {7,8, 9}, {1,2,1999}, 'A'},
        {30, "AF", 'F', 7.5, {7,8}, {1,2,2005}, 'I'},
        {35, "MP", 'M', 8, {7,8}, {1,2,2000}, 'A'},
        {55, "MK", 'F', 4, {7,8}, {1,2,1997}, 'A'},
    };

    FILE *pf;
    pf = fopen(ruta, "wb");
    if(pf==NULL)
    {
        return -1;
    }
    fwrite(alumno, sizeof(alumno), 1, pf);
    fclose(pf);
    return 1;
}

int cargar_archivo2(char *ruta)
{
    t_alumno alumno[] =
    {
        {15, "MM", 'F', 7.5, {7,8}, {1,2,2005}, 'A'},
        {20, "RR", 'M', 7.5, {7,8}, {1,2,2015}, 'A'},
        {30, "AF", 'F', 7.5, {7,8}, {1,2,1998}, 'A'},
        {50, "AN", 'F', 4, {7,8}, {1,2,1997}, 'A'},
        {88, "RP", 'F', 5, {7,8}, {1,2,1997}, 'A'}
    };

    FILE *pf;
    pf = fopen(ruta, "wb");
    if(pf==NULL)
    {
        return -1;
    }
    fwrite(alumno, sizeof(alumno), 1, pf);
    fclose(pf);
    return 1;
}


