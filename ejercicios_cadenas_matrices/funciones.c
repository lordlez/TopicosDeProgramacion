#include "header.h"

int cargar_archivo( char *ruta)
{
    char matCad[][MAXLINE] =
    {
        "Hay solo dos clases de lenguajes de programacion: quellos de los que la gente esta siempre quejandose y aquellos que nadie usa -- Bjame Stroustrup",
        "La programacion en bajo nivel es buena para el alma del programador --John Carmacj, cofundador de id Software (El del doom!)",
        "La informatica tiene que ver con ordenadores que la astronomia con los telescopios -- Edgar W. Dijkstra",
        "No temo a los ordenadores; lo que temo es quedarme sin ellos --Isaac Asimov"
    };
    int i;
    FILE *pf;

    pf=fopen(ruta, "wt");
    if(pf==NULL)
    {
        return -1;
    }

    for(i=0; i<sizeof(matCad)/MAXLINE; i++)
    {
        fputs(matCad[i], pf);
        fputs("\n", pf);
    }
    fclose(pf);
    return 1;
}

int leer_archivo(char *ruta)
{
    char linea[MAXLINE];
    int contador_palabras, contador_lineas = 0;
    char *palabra_larga = NULL;
    FILE *pf;
    pf=fopen(ruta, "rt");
    if(pf==NULL)
    {
        return -1;
    }

    while(fgets(linea, sizeof(linea)-1, pf))
    {
        puts(linea);
        contador_lineas += 1;
        contador_palabras = cantidad_palabras(linea);
        printf("La linea %d tiene %d palabras\n\n", contador_lineas, contador_palabras);
        palabra_larga = palabra_mas_larga(linea);
        printf("\nLa palabra mas larga de la linea 1 es : %s", palabra_larga);
    }

    fclose(pf);
    return 1;
}


int cantidad_palabras(char *cad)
{
    int cantidad = 0;
    int estado = 0;

    while(*cad != '\n')
    {
        if(*cad == ' ')
        {
            estado = 0;
        }
        else
        {
            if((*cad >= 'A' && *cad <= 'Z') || (*cad >= 'a' && *cad <= 'z') || (*cad >= '0' && *cad <= '9'))
            {
                if(estado == 0)
                {
                    estado  = 1;
                    cantidad++;
                }
            }
        }
        cad++;
    }
    return cantidad;
}


///falla
char *palabra_mas_larga(char *cad)
{
    char *ini = cad;
    char *palabra = cad;
    char *max_palabra = cad;

    while(*cad != '\n')
    {
        if((*cad >= 'A' && *cad <= 'Z') || (*cad >= 'a' && *cad <= 'z') || (*cad >= '0' && *cad <= '9'))
        {
            *palabra = *cad;
            palabra++;
            cad++;
        }else
        {
            *palabra = '\0';
            strcpy(max_palabra, palabra);
            cad++;
            palabra = ini;
        }
    }
    return max_palabra;
}



/*
char *palabra_mas_larga(char *cad)
{
    //cargo la palabra actual
    char palabra[50];

	char max_cadena[50] = "";

	char *p_recorrido = cad;
	char *p_palabra = palabra;

	int contador_apariciones = 0;


    while(*p_recorrido != '\n')
    {
        if((*p_recorrido >= 'A' && *p_recorrido <= 'Z') ||
         		(*p_recorrido >= 'a' && *p_recorrido <= 'z') ||
          			(*p_recorrido >= '0' &&*p_recorrido <= '9'))
        {
            *p_palabra = *p_recorrido;
            p_recorrido++;
            p_palabra++;
        }
        else
        {
        	// aca entraria solo cuando hay espacio en blanco

        	if(strcmp(max_cadena,palabra) == 0)
        	{
        		contador_apariciones++;
        	}
        	else
        	{
        		if(strlen(max_cadena) < strlen(palabra) || strcmp(max_cadena,"") == 0)
        		{
        			contador_apariciones = 0;
        			printf("palabra: %s", palabra);
        			strcpy(max_cadena,palabra);
        			strcpy(palabra, "");
        			p_recorrido++;
        		}

        	}
        }
    }
    return max_cadena;
}
*/

