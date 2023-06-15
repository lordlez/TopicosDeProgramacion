#include "header.h"

int main()
{
    char rutaBinInicio[] = "alumnobininicio.dat";
    leer_binario(rutaBinInicio);
    char rutaTxtFijo[] = "alumnotxtfijo.txt";
    char rutaTxtVariable[] = "alumnotxtvariable.txt";
    char rutaBinFin[] = "alumnobinfin.dat";

    crear_binario_inicio(rutaBinInicio);
    pasar_a_texto_fijo(rutaBinInicio ,rutaTxtFijo);
    pasar_a_texto_variable(rutaTxtFijo, rutaTxtVariable);
    crear_binario_fin(rutaTxtVariable, rutaBinFin);
    leer_binario(rutaBinFin);

    return 0;
}
