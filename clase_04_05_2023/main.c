#include <stdio.h>
#include <stdlib.h>
//TUTOR DE LA CLASE: BRIAN EDUARDO JORDI
int main()
{
    /*
    int numero;
    int *pNumero;
    numero = 9;

    //trato de asignar memoria al puntero pNumero
    pNumero = (int*)malloc(sizeof(int)*5);
    if(pNumero == NULL)
    {
        return 1;
    }

    free(pNumero);
    pNuevo = NULL;
    */

    ///TAREA
    /*
    Reservar memoria para una cadena, después leer esa cadena de caracteres desde teclado, almacenándola en la memoria reservada. Y por último, mostrarlo por pantalla.


    char *pCad;
    pCad = (char*)malloc(sizeof(char)*10);
    if(pCad == NULL)
        return 1;

    printf("Ingrese una cadena: ");
    gets(pCad);

    printf("Cadena: %s", pCad);


    free(pCad);
    pCad = NULL;
    return 0;
    */

    ///ARCHIVOS
    FILE *pf

    typedef struct{
        ///...
    }t_registro;

    t_registro reg;


    //abro el archivo para leer
    pf = fopen("binario.dat", "rb+");
    if(pf == NULL)
        return 1;

    //debo leer una vez antes de entrar al while
    fread(&reg, sizeof(t_registro), 1, pf);

    //mientras no sea el fin del archivo
    while(!feof(pf))
    {
        //escribir
        fwrite(&reg, sizeof(r_registro), 1, pf);


        //leer
        fread(&reg, sizeof(t_registro), 1, pf);
    }

    //me ubica al principio del archivo
    rewind(pf);

    //moverme dentro del archivo, puntero, cantidad de bytes, desde donde
    fseek(pf, 0, SEEK_END);



    fclose(pf);


    return 0;
}
