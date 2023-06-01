#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ABRIR_ARCHIVO(x, y)\
                   {\
                     FILE *pf; \
                     pf = fopen(x, "rb");\
                     if(pf == NULL) \
                     {\
                        if(y)\
                        {\
                            fprintf(stdout, "\nEl archivo no se pudo abrir: %s", x);\
                        }\
                        return 0;\
                     }\
                     printf("\nSe abrio correctamente");\
                     fclose(pf);\
                     return 1;\
                   }



int abrir_archivo(const char *ruta, int error);


#endif // HEADER_H_INCLUDED
