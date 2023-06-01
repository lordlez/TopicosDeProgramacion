#include "header.h"

int main()
{
    int vec[TAM] = {2,3,6,8};
    int ce = 4, valor = 5;

    if(insertar_en_orden(vec, &ce, valor))
    {
        printf("Se pudo insertar el elemento\n");
    }else{
        printf("No se pudo insertar el elemento");
    }

    mostrar_vector(vec, &ce);

    return 0;
}
