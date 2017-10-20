#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define   MOV 100


int main()
{
    char seguir='s';
    int opcion=0;
    int i;
    char guardar='s';
    EMovie pelicula[MOV];

   for(i=0;i<MOV;i++)
   {
     pelicula[i].estado=0;

   }
   cargarDesdeArchivo(pelicula,MOV);
   system("pause");
   system("cls");

    while(seguir=='s')
    {
        printf("                      \n");
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Modificar pelicula\n");
        printf("4- Generar pagina web\n");
        printf("5- Salir\n");


        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                cargarPeli(pelicula,MOV);
                break;
            case 2:
                system("cls");
                eliminarPelicula(pelicula,MOV);
                break;
            case 3:
                system("cls");
                modificarPelicula(pelicula,MOV);
                break;
            case 4:
                system("cls");
                mostrarPorHTML(pelicula,MOV);
                printf("Pagina de peliculas generada!\n");
                printf("Listo para ver la lista desde el html....\n");
                break;
            case 5:

                printf("\nGuardar cambios S/N ?: ");
				guardar = tolower(getche());

				if(guardar == 's')
				{
                  guardarEnArchivo(pelicula,MOV);

                }
                else
                {
                  printf("\nNo se guardaron los cambios");
                }
                seguir = 'n';

                break;
      }
    }

    return 0;
}
