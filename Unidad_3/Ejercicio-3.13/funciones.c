#include "header.h"


int encontrar(t_persona *p, int ce, t_persona *apyn)
{
    int i = 0;
    while(i < ce)
    {
        if(buscar_por_apellido_nombre(p, apyn) == 1)
        {
            return 1;
        }
        p++;
        i++;
    }
    return 0;
}


int buscar_por_apellido_nombre(t_persona *p, t_persona *apyn)
{
    if((strcmpi(p->apellido, apyn->apellido)) == 0 && (strcmpi(p->nombres, apyn->nombres)) == 0)
    {
        return 1;
    }
    return 0;
}


