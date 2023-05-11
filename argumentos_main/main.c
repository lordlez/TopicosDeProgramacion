#include <stdio.h>
#include <stdlib.h>

//argumentos a main
int main(int argc, char *argv[])
{
    int i;

    for(i=0;i<argc;i++)
    {
        printf("Parametro %d=%s\n", i, argv[i]);
    }

    return 0;
}
