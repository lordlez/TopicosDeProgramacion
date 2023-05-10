#include "header.h"

int main()
{
    int valor;
    char cad1[] = "bbb";
    char cad2[] = "bb";

    valor = mi_strcmp(cad1, cad2);

    if(valor == MENOR)
    {
        printf("%s es menor que %s", cad1, cad2);
    }else
    {
        if(valor == MAYOR)
        {
            printf("%s es mayor que %s", cad1, cad2);
        }else
        {
            printf("%s es igual que %s", cad1, cad2);
        }
    }

    return 0;
}
