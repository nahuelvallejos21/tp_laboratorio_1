#include <stdio.h>
#include "funciones.h"

void cargarPersona(EPersona alumno[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
      if(alumno[i].estado==0)
      {
        printf("Ingrese numero de DNI : ");
        scanf("%d",&alumno[i].dni);
        printf("Ingrese nombre : ");
        fflush(stdin);
        gets(alumno[i].nombre);
        printf("Ingrese edad : ");
        scanf("%d",& alumno[i].edad);

        alumno[i].estado=1;
        break;
      }
    }
}

void borrarPersona(EPersona alumno[], int tam)
{
    char rta;
    int flag=0;
    int i;
    int aux;

     printf("Ingres numero de DNI : ");
     scanf("%d",&aux);

    for(i=0; i<tam; i++)
    {
       if(aux==alumno[i].dni)
       {
         flag=1;
         printf("%d\t%s\t%d\n",alumno[i].dni,alumno[i].nombre,alumno[i].edad);
         printf("Esta seguro de eliminar al alumno de la lista? s/n : ");
         rta= getche();


         if(rta=='s')
         {
            alumno[i].estado=0;

         }
         else
         {
           printf("\nAccion cancelada por el usuario ");
         }


       }
    }
      if(flag==0)
      {
        printf("Error!, DNI inexistente\n ");
      }

}

void mostrarPersona(EPersona alumno[],int tam)
{
  int i;
  for(i=0;i<tam;i++)
  {
     if(alumno[i].estado==1)
     {
        printf("%d\t%s\t%d\n",alumno[i].dni,alumno[i].nombre,alumno[i].edad);
     }
  }
}
void ordenarPersonas(EPersona alumno[], int tam)
{
    int i, j;
    EPersona auxP;

    for(i=0; i<tam-1; i++)
    {

        for(j=i+1; j<tam; j++)
        {

            if(stricmp(alumno[i].nombre, alumno[j].nombre)>0)
            {
                auxP=alumno[i];
                alumno[i]=alumno[j];
                alumno[j]=auxP;

            }
        }
    }
    mostrarPersona(alumno,tam);
}
//int mostrarGraficosDeEdades(EPersona alumno[] , int tam)
//{
   //int contador=0;
   //int i;
   //int j;

   //for(i=0;i<tam;i++)
   //{
      //if(alumno[i].edad<=18)
        //{
           //contador++;
           //printf("%d",contador);
        //}
       //if(alumno[i].edad>=19 && alumno[i].edad<=35)
       //{
          //contador++;
           //printf("%d",contador);

       //}
       //if(alumno[i].edad>35)
       //{
        // contador++;
         //printf("%d",contador);

       //}
  //}
//}

 //}
//}
