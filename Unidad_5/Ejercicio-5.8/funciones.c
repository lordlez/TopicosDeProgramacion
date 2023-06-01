#include "header.h"

int cargar_cadenas(char mat[][COL])
{
    char cad1[30];
    char cad2[30];
    int longitudCad1;
    int longitudCad2;
    int i=0;
    int ce = 0;

    printf("Ingrese la cadena 1: ");
    scanf("%s", cad1);
    printf("Igrese la cadena 2: ");
    scanf("%s", cad2);

    while(mi_strcmpi(cad1, cad2)!=0)//mientras las cadenas sean diferentes
    {
        longitudCad1 = mi_strlen(cad1);
        longitudCad2 = mi_strlen(cad2);
        if(longitudCad1 < longitudCad2)
        {
            mi_strcpy(mat[i], cad1);
            i++;
            mi_strcpy(mat[i], cad2);
            i++;
            ce+=2;
        }
        else
        {
            if(longitudCad1 > longitudCad2)
            {
                mi_strcpy(mat[i], cad2);
                i++;
                mi_strcpy(mat[i], cad1);
                i++;
                ce+=2;
            }
            else
            {
                if(mi_strcmpi(cad1, cad2)<0)
                {
                    mi_strcpy(mat[i], cad1);
                    i++;

                    mi_strcpy(mat[i], cad2);
                    i++;
                    ce+=2;
                }
                else
                {
                    mi_strcpy(mat[i], cad2);
                    i++;
                    mi_strcpy(mat[i], cad1);
                    i++;
                    ce+=2;
                }
            }
        }

        printf("Ingrese la cadena 1: ");
        scanf("%s", cad1);
        printf("Igrese la cadena 2: ");
        scanf("%s", cad2);
    }
    return ce;
}


void mostrar_matriz(char mat[][COL], int ce)
{
    int i;
    for(i=0; i<ce; i++)
    {
        printf("%s\n", mat[i]);
    }
}

int mi_strcmpi(char *s1, char *s2)
{
    char *cad1 = s1;
    char *cad2 = s2;
    int minus;

    while(*s1 != '\0')
    {
        minus = mi_tolower(*s1);
        *s1 = minus;
        s1++;
    }

    while(*s2 != '\0')
    {
        minus = mi_tolower(*s2);
        *s2 = minus;
        s2++;
    }



    while(*cad1 != '\0' && *cad2 != '\0')
    {
        if(*cad1 < *cad2)
        {
            return -1;
        }else
        {
            if(*cad1 > *cad2)
            {
                return 1;
            }
        }
        cad1++;
        cad2++;
    }

    if(*cad1 == '\0' && *cad2 == '\0')
    {
        return 0;
    }else
    {
        if(*cad1 == '\0')
        {
            return -1;
        }else
        {
            return 1;
        }
    }
}

int mi_tolower(int ch)
{
    if(ch >= 65 && ch <= 90)
    {
        ch = ch+32;
    }
    return ch;
}

char *mi_strcpy(char *s1, const char *s2)
{
    while(*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    return s1;
}


size_t mi_strlen(const char *s)
{
    int longitud = 0;
    while(*s != '\0')
    {
        longitud++;
        s++;
    }
    return longitud;
}








