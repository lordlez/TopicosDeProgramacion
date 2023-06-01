#include "header.h"

int main()
{
    t_persona persona[] =
    {
        {222,"Perez", "Luis", 20},
        {333, "Perez", "Luis", 25},
        {111, "Perez", "Marcelo", 30},
        {555, "Gomez", "Math", 35},
        {444, "Gonzales", "Martin", 40},
    };


    t_persona per = {555, "Gomez", "Math", 35};

    if(encontrar(persona, 5, &per))
    {
        printf("Persona encontrada:\n");
        printf("DNI: %d", per.dni);
        printf("\nAPELLIDO: %s", per.apellido);
        printf("\nNOMBRE: %s", per.nombres);
        printf("\nPESO: %.2f", per.peso);
    }else
    {
        printf("Persona no encontrada.");
    }



    return 0;
}
