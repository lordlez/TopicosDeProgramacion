#include "header.h"

int comparar_apyn(const void *e1, const void *e2)
{
    t_persona *persona1 = (t_persona*)e1;
    t_persona *persona2 = (t_persona*)e2;
    int cmp;

    if((cmp=strcmpi(persona1->apellido, persona2->apellido)))
    {
        return cmp;
    }else
    {
        if((cmp=strcmpi(persona1->nombre, persona2->nombre)))
        {
            return cmp;
        }
    }
    return cmp;//lo retorno para evitar el warning
}


void mostrar_generico(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void *))
{
    int i;
    for(i=0;i<cantE;i++)
    {
        mostrar(vec);
        vec+=tamE;
    }
}

void mostrar_estructura(void *vec)
{
    t_persona *p = (t_persona*)vec;
    printf("DNI: %d", p->dni);
    printf(" APELLIDO: %s", p->apellido);
    printf(" NOMBRE: %s", p->nombre);
    printf(" PESO: %.2f", p->peso);
    printf("\n");
}

