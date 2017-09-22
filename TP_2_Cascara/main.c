#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 20


int main()
{
    int i;
    char seguir='s';
    int opcion=0;
    EPersona alumno[TAM];
    int aux;


    for(i=0;i<TAM;i++)
    {
      alumno[i].estado=0;
    }

    while(seguir=='s')
    {
        printf("                  \n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                cargarPersona(alumno,TAM);
                break;
            case 2:
                borrarPersona(alumno, TAM);
                break;
            case 3:
                ordenarPersonas(alumno, TAM);
                break;
            case 4:
                printf("\nNo realizado");
               break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
