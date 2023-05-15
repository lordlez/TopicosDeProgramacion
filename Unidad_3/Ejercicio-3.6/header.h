#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define REDONDEO(x) ((int)((x)+((x)>= 0 ? 0.5 : -0.5)))
#define VALOR_ABSOLUTO(x) (x < 0 ? -(x) : x)
#define PARTE_ENTERA(x) ((int)(x))
#define PARTE_DECIMAL(x) (x - (int)(x))
#define ES_PAR(x) (x % 2 == 0 ? printf("Es par") : printf("No es par"))
#define ES_POTENCIA_DE(x,y) (y % x == 0 ? printf("Es potencia") : printf("No es potencia"))
#define ES_LETRA(x) ((x >= 'a' && x<= 'z') || (x >= 'A' && x<= 'Z') ? printf("Es letra") : printf("No es letra"))
#define ES_DIGITO(x) ((x >= '0' && x <= '9') ? printf("Es digito") : printf("No es digito"))
#define ES_MAYUSCULA(x) ((x >= 'A' && x<='Z') ? printf("Es mayuscula") : printf("No es mayuscula"))
#define ES_MINUSCULA(x) ((x >= 'a' && x<='z') ? printf("Es minuscula") : printf("No es minuscula"))
#define ES_BLANCO(x) ((x==' ' || x=='\n' || x=='\t' || x=='') ? printf("Es blanco") : printf("No es blanco"))
#define A_MAYUSCULA(x) (((x)>='a' && (x)<='z') ? ((x)-32) : (x))
#define A_MINUSCULA(x) (((x)>='A' && (x)<='Z') ? ((x)+32) : (x))
#define MENOR_DE_DOS_ENTEROS(x,y) ((x<y) ? x : y)


int menor_de_dos_enteros(int num1, int num2);


#endif // HEADER_H_INCLUDED

