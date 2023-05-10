#include "header.h"

int main()
{
    /*
    ///Parte a)
    char cad[] = "hola mundo";
    char *cad2;

    cad2 = copia_cadena(cad);

    printf("Origen: %s", cad);
    printf("\nDestino: %s", cad2);

    free(cad2);
    cad2 = NULL;
    */
    ///Parte b)
    int num = 5;
    int *pNum;

    char cad[] = "busco laburo de programador";
    int longitud = strlen(cad);
    char *pCad;

    float salario = 500.62;
    float *pSalario;

    char letra = 'L';
    char *pLetra;

    int vec[] = {1,2,3,4,5};
    int ce = 5;
    int *pVec;
    int i;

    t_dato dato;
    t_dato *pDato;
    strcpy(dato.nombre, "Lorenzo");
    dato.edad = 27;


    pNum = (int*)copia_cosas(&num, sizeof(int));
    printf("Elemento int: %d", num);
    printf("\nNuevo elemento int: %d", *pNum);

    pCad = (char*)copia_cosas(cad, longitud+1);
    printf("Elemento char: %s", cad);
    printf("\nNuevo elemento char: %s", pCad);

    pSalario = (float*)copia_cosas(&salario, sizeof(float));
    printf("\nElemento float: %.2f", salario);
    printf("\nNuevo elemento float: %.2f", *pSalario);

    pLetra = (char*)copia_cosas(&letra, sizeof(char));
    printf("\nElemento char: %c", letra);
    printf("\nNuevo elemento char: %c", *pLetra);


    ///PREGUNTAR ACA ME DA CUALQUIER COSA
    pVec = (int*)copia_cosas(vec, ce);
    printf("\nElemento vec: ");
    for(i=0;i<ce;i++)
        printf("%d, ", vec[i]);

    printf("\nElemento nuevo vec: ");
    for(i=0;i<ce;i++)
    {
        printf("%d, ", *pVec);
        pVec++;
    }

    pDato = (t_dato*)copia_cosas(&dato, sizeof(t_dato));
    printf("\nElemento estructura: %s", dato.nombre);
    printf("\nElemento estructura: %d", dato.edad);
    printf("\nNuevo elemento estructura: %s", pDato->nombre);
    printf("\nNuevo elemento estructura: %d", pDato->edad);

    free(pDato);
    pDato = NULL;
    free(pVec);
    pVec = NULL;
    free(pLetra);
    pLetra = NULL;
    free(pSalario);
    pSalario = NULL;
    free(pCad);
    pCad = NULL;
    free(pNum);
    pNum = NULL;
    return 0;
}
