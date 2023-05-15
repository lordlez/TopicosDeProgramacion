#include "header.h"

int main()
{
    ///sscanf
    /*
        //sscanf toma tres valores, toma todo lo escrito, y lo separa segun
        //el formato que le indicamos como parametro, seguido de las variables
        char nombre[20]="", entrada[81]="";
        unsigned int edad=0;
        printf( "Escriba su nombre y edad, separados por un espacio:\n" );
        gets( entrada );
        sscanf( entrada, "%s %u", nombre, &edad );
        printf( "Has escrito: %s\n", entrada );
        printf( "Nombre: %s. Edad: %d\n", nombre, edad );
    */

    ///sprintf
    /*
        //sprintf guarda en una cadena un mensaje, mas lo que ingrese por teclado
        //luego lo muestro con puts
        char nombre[20], mensaje[81];
        unsigned int edad=0;
        printf( "Escriba su nombre: " );
        scanf( "%s", nombre );
        printf( "Escriba su edad: " );
        scanf( "%u", &edad );
        sprintf( mensaje, "\nHola %s. Tienes %d anyos.\n", nombre, edad );
        puts( mensaje );
    */
    return 0;
}
