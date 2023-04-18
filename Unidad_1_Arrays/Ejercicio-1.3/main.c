#include "header.h"

int main()
{
    int vec[TAM] = {4,8,9,1,7};
    int ce = 5, posicion;
    printf("Ingrese una posicion a eliminar (1-5): ");
    scanf("%d", &posicion);

    if(posicion <= TAM)
    {
        eliminar_vector_posicion(vec, &ce, posicion);
        printf("Elemento eliminado\n");
        mostrar_vector(vec, &ce);
    }else{
        printf("La posicion es incorrecta");
    }

    return 0;
}



