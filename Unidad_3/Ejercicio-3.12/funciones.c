#include "header.h"

int encontrar(t_persona *p, int ce, t_persona *d)
{
    int i = 0;
    while(i < ce)
    {
        if(buscarXdni(p, d))
        {
            return 1;
        }
        p++;
        i++;
    }
    return 0;
}


int buscarXdni(const t_persona *p, t_persona *d)
{
    if(p->dni == d->dni)
        return 1;

    return 0;
}
