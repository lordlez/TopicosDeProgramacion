#include "header.h"

int comparar_dni(const void *e1, const void *e2)
{
    t_persona *persona1 = (t_persona*)e1;
    t_persona *persona2 = (t_persona*)e2;
    if(persona1->dni < persona2->dni)
    {
        return -1;
    }else
    {
        if(persona1->dni > persona2->dni)
        {
            return 1;
        }else
        {
            return 0;
        }
    }
}

void mostrar_generico(void *vec, size_t cantE, size_t tamE, void(*mostrar)(void *))
{
    int i;
    for(i=0;i<cantE;i++)
    {
        mostrar(vec);
        printf("\n");
        vec+=tamE;
    }
}

void mostrar_persona(void *dato)
{
    t_persona *pe = (t_persona*)dato;
    printf("\nDNI: %d", pe->dni);
    printf("\nAPELLIDO: %s", pe->apellido);
    printf("\nNOMBRES: %s", pe->nombres);
    printf("\nPESO: %.2f", pe->peso);
}
