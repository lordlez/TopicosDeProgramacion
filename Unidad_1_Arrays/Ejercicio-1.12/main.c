#include "header.h"

int main()
{
    int mat[][COL] = {{21,0,0},
                      {0,2,0},
                      {0,0,3}
                      };

    if(es_diagonal(mat))
    {
        printf("La matriz es diagonal");
    }else{
        printf("La matriz no es diagonal");
    }

    return 0;
}
