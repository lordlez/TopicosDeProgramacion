#include "header.h"
/*
///Version Estatica
int main()
{
    t_vector vector;
    int elemento = 3;

    crear_vector(&vector);
    destruir_vector(&vector);

    if(vector_lleno(&vector))
    {
        printf("\nEl vector esta lleno");
    }else
    {
        printf("\nEl vector no esta lleno");
    }

    if(vector_vacio(&vector))
    {
        printf("\nEl vector esta vacio");
    }else
    {
        printf("\nEl vector no esta vacio");
    }

    insertar_en_orden(&vector, elemento);

    eliminar_elemento(&vector, 5);

    mostrar_vector(&vector);


    return 0;
}
*/

///Version Dinamica
int main()
{
    t_vector vector;
    int capacidad = 100;
    int elemento = 5;

    crear_vector(&vector, capacidad);
    destruir_vector(&vector);
    if(vector_lleno(&vector))
    {
        printf("El vector esta lleno");
    }
    else
    {
        printf("El vector no esta lleno");
    }

    if(vector_vacio(&vector))
    {
        printf("\nEl vector esta vacio");
    }
    else
    {
        printf("\nEl vector no esta vacio");
    }

    insertar_en_orden(&vector, elemento);

    eliminar_elemento(&vector, elemento);

    mostrar_vector(&vector);



    return 0;
}

