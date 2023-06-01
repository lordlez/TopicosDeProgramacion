#include "header.h"


int main()
{

    t_persona persona[] = {
                            {222,"Perez", "Luis", 20},
                            {333, "Perez", "Luis", 25},
                            {111, "Perez", "Marcelo", 30},
                            {555, "Gomez", "Math", 35},
                            {444, "Gonzales", "Martin", 40},
                            };


    qsort(persona, 5, sizeof(t_persona), comparar_apyn);
    mostrar_generico(persona,5, sizeof(t_persona), mostrar_estructura);


    return 0;
}
