#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 20

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona lista[TAM];

    inicializarEstados(lista,TAM);

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                cargarPesona(lista,TAM);
                break;
            case 2:
                borrarPersona(lista,TAM);
                break;
            case 3:
                mostrarPersonas(lista,TAM);
                break;
            case 4:
                graficoEdades(lista,TAM);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
