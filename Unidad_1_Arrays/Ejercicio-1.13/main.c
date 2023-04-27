#include "header.h"

int main()
{
    int mat[][COL] = {{1,0,0},
                      {0,1,0},
                      {0,0,1}
                      };

    if(es_identidad(mat))
    {
        printf("Es matriz identidad");
    }else{
        printf("No es matriz identidad");
    }

    return 0;
}
