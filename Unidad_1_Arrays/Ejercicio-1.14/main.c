#include "header.h"

int main()
{
    int mat[][COL] = {{0,1,-1},
                      {1,0,2},
                      {-1,2,1},
                     };

    if(es_simetrica(mat))
    {
        printf("Es simetrica");
    }else{
        printf("No es simetrica");
    }

    return 0;
}
