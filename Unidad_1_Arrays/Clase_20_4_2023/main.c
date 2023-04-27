
/****************FECHA*******************/
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int d, m, a;
}t_fecha;

int es_fecha_valida(t_fecha *f);



int main()
{
    t_fecha f = {20,04,2023};

    if(es_fecha_valida(&f))
    {
        printf("Fecha valida");
    }else{
        printf("Fecha invalida");
    }



    return 0;
}

int es_bisiesto(int a)
{
    return a%400==0 || (a%100!=0 && a%4==0);
}



int cant_dias_mes(int m, int a)
{
    //esta inicialidado estaticamente, y si termina la funcion
    //no la vuelvo a inicializar, porque sigue en memoria
    static int dias_mes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    return m==2 && es_bisiesto(a) ? 29 : dias_mes[m];
}


int es_fecha_valida(t_fecha *f)
{
    if(f->a >= 1601)
        if(f->m>=1 && f->m<=12)
            if(f->d >= 1 && f->d <= cant_dias_mes(f->m, f->a))
                return 1;
    return 0;
}





/*******************CADENA DE CARACTERES***********************/
/*
#include<stdio.h>
#include<string.h>

char* mi_strcat(char *cad1, const char *cad2);

int main()
{
    char cad1[50] = "hola ";
    char cad2[50] = "mundo!";

    strcat(cad1, cad2);
    printf("%s\n", cad1);

    return 0;
}

char *mi_strcat(char *cad1, const char *cad2)
{
    char *ini = cad1;
    while(*cad1 != '\0') // (cad1) == (*cad1 != '\0')
        cad1++;
    while(*cad2 != '\0') // (cad2) == (*cad2 != '\0')
    {
        *cad1 = *cad2;
        cad1++;
        cad2++;
    }
    *cad1='\0';
    return ini;
}

/*TAREA*/
// Realizar las funciones de la
// libreria string reversionadas
// con aritmetica de punteros





/************************MATRICES********************************/
#include <stdio.h>

#define COL 5
#define FIL 3
#define ORD 6


void elem_debajo_diago_ppal(mat3, 6);


int main()
{
    //int mat[FIL][COL];
    //int mat1[FIL][COL] = {{1,2,3},
//                            {4,5,6},
  //                          {7,8,9}};

    int mat3[][ORD] = {{1,2,3,4,5,6},
                       {7,8,9,10,11,12},
                       {13,14,15,16,17,18},
                       {19,20,21,22,23,24},
                       {25,26,27,28,29,30},
                       {31,32,33,34,35,36}};

    elem_debajo_diago_ppal(mat3, 6);

    // TAREA
    // resolver la matriz que se ve
    // en el excel de la clase grabada
    // de pezzolla


    return 0;
}


void elem_debajo_diago_ppal(int mat3[][ORD], int ord)
{
    int i, j;
    for(i=1; i<ord; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%4d", mat3[i][j]);
        }
        printf("\n");
    }
}


















