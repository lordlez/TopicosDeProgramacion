#include "header.h"

int main()
{
    char cad[] ="D:\\UNLaM\\PrimerCuatri2023\\Materias\\TopicosDeProgramacion\\EJERCICIOS_RESUELTOS\\Unidad_2\\archivos_binarios\\binario.dat";
    char cad2[] = "archivo.txt";

    crear_archivo_texto_variable(cad, cad2);
    leer_mostrar_archivo_texto_variable(cad2);

    return 0;
}
