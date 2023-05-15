#include "header.h"

int main()
{
    t_persona persona[] = {
                            {222,"Apellido1", "Nombre 1", 20},
                            {333, "Apellido2", "Nombre 2", 25},
                            {111, "Apellido3", "Nombre 3", 30},
                            {555, "Apellido4", "Nombre 4", 35},
                            {444, "Apellido5", "Nombre 5", 40},
                            };

    qsort(persona, 5, sizeof(t_persona), comparar_dni);
    mostrar_generico(persona, 5, sizeof(t_persona), mostrar_persona);


    return 0;
}
