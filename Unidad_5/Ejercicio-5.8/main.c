#include "header.h"

int main()
{
    char mat[FIL][COL];
    int ce;
    ce = cargar_cadenas(mat);
    mostrar_matriz(mat, ce);


    return 0;
}
