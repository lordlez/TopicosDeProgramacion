#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define INTERCAMBIAR(x,y) \
            int aux; \
            aux = *x; \
            *x = *y; \
            *y = aux





void intercambiar(int *num1, int *num2);


#endif // HEADER_H_INCLUDED
