#include "header.h"

int main()
{
    int vecEntero[] = {2,4,1,7,3};
    int ceEntero = 5;

    float vecFlotante[] = {2.1, 4.1, 1.1, 7.1, 3.1};
    int ceFlotante = 5;

    t_alumno alumnos[] =
    {
        {222,"Leo", "Messi", 10},
        {777, "Cristiano", "Ronaldo", 7},
        {111, "Dibu", "Martinez", 1},
        {666, "Enzo", "Fernandez", 5}
    };

    void *menor;
    menor = buscar_menor_generico(vecEntero, ceEntero, sizeof(int), comparar_enteros);
    printf("La direccion del elemento menor es: %p", menor);
    //con las dos lineas de abajo verifico que sea correcta la direccion dada
    printf("\nDireccion: %p", &vecEntero[2]);
    printf("\nValor: %d", vecEntero[2]);

    printf("\n\n");

    menor = buscar_menor_generico(vecFlotante, ceFlotante, sizeof(float), comparar_flotantes);
    printf("La direccion del elemento menor es: %p", menor);
    //con las dos lineas de abajo verifico que sea correcta la direccion dada
    printf("\nDireccion: %p", &vecFlotante[2]);
    printf("\nValor: %.2f", vecFlotante[2]);

    printf("\n\n");

    menor = buscar_menor_generico(alumnos, 4, sizeof(t_alumno), comparar_alumno_dni);
    printf("La direccion del elemento menor es: %p", menor);
    //con las dos lineas de abajo verifico que sea correcta la direccion dada
    printf("\nDireccion: %p", &alumnos[2]);
    printf("\nValor: %d", alumnos[2].dni);

    printf("\n\n");

    menor = buscar_menor_generico(alumnos, 4, sizeof(t_alumno), comparar_alumno_nom);
    printf("\nLa direccion del elemento menor es: %p", menor);
    printf("\nDireccion: %p", &alumnos[1]);
    printf("\nValor: %s", alumnos[1].nombre);

    printf("\n\n");

    menor = buscar_menor_generico(alumnos, 4, sizeof(t_alumno), comparar_alumno_ape);
    printf("\nLa direccion del elemento menor es: %p", menor);
    printf("\nLa direccion: %p", &alumnos[3]);
    printf("\nValor: %s", alumnos[3].apellido);

    printf("\n\n");

    menor = buscar_menor_generico(alumnos, 4, sizeof(t_alumno), comparar_alumno_prom);
    printf("\nLa direccion del elemento menor es: %p", menor);
    printf("\nLa direccion: %p", &alumnos[2]);
    printf("\nEl valor: %.2f", alumnos[2].promedio);

    return 0;
}
