
#include "funciones.h"
#include <stdio.h>
#include "string.h"
#include "conio.h"

int buscarLibre(EMovie* pelicula, int tamPel)
{
  int index=-1;
  int i;
  if(pelicula!=NULL)
  {
   for( i=0;i<tamPel;i++)
   {
    if((pelicula+i)->estado==0)
    {
     index=i;
     break;
    }
   }
  }
  return index;
}
void cargarPeli(EMovie* pelicula,int tamPel)
{
  int i;
  int index;
  char titulo[50];
  int encontro=0;
  index=buscarLibre(pelicula,tamPel);
  if(index!=-1)
  {
    printf("INGRESO DE DATOS:\n");
    printf("Ingrese un titulo para la pelicula : ");
    fflush(stdin);
    gets(titulo);

    for(i=0;i<tamPel;i++)
    {
       if(stricmp(titulo,(pelicula+i)->titulo)==0 && (pelicula+i)->estado==1)
       {
         encontro=1;
       }
    }

    if(!encontro)
    {
      strcpy((pelicula+index)->titulo,titulo);
      printf("Ingrese un genero: ");
      fflush(stdin);
      gets((pelicula+index)->genero);
      printf("Ingrese la duracion de la pelicula : ");
      fflush(stdin);
      gets((pelicula+index)->duracion);
      printf("Ingrese descripcion : ");
      fflush(stdin);
      gets((pelicula+index)->descripcion);
      printf("Ingrese puntaje : ");
      fflush(stdin);
      gets((pelicula+index)->puntaje);
      printf("Link de imagen : ");
      fflush(stdin);
      gets((pelicula+index)->linkImagen);
      (pelicula+index)->estado = 1;
      printf("Pelicula cargada correctamente.....\n");

   }
   else
   {
     printf("El nombre de la pelicula ya existe\n");
   }
  }
  else
  {
    printf("No queda espacio\n");
  }


}
void eliminarPelicula(EMovie* pelicula, int tamPel)
{
   char rta;
   int flag=0;
   char auxPeli[50];
   int i;
   printf("Ingrese la pelicula a eliminar : ");
   fflush(stdin);
   gets(auxPeli);


   if(pelicula!=NULL)
   {
    for(i=0;i<tamPel;i++)
    {
     if(stricmp(auxPeli,(pelicula+i)->titulo)==0 && (pelicula+i)->estado==1)
     {
         flag=1;
         printf("Esta seguro de eliminar la pelicula? s/n: ");
         rta = tolower(getche());
         if(rta=='s')
         {
          (pelicula+i)->estado=0;
           printf("\nPelicula eliminada\n");
         }
         else
         {
          printf("\nAccion cancelada por el usuario!!!\n");
         }
     }

   }
   if(flag==0)
   {
     printf("\nError!. No existe el nombre de la pelicula\n");
   }
  }
}
void modificarPelicula(EMovie* pelicula,int tamPel)
{
  int i;
  char titulo[50];
  char rta;
  int flag=0;
  char seguir='s';
  int opcion=0;

  if(pelicula!=NULL)
  {
    printf("Ingrese la pelicula a modificar : ");
    fflush(stdin);
    gets(titulo);
    for(i=0;i<tamPel;i++)
    {
     if(stricmp(titulo,(pelicula+i)->titulo)==0 && (pelicula+i)->estado==1)
     {
       flag=1;
       printf("Pelicula encontrada %s:",(pelicula+i)->titulo);
       printf("\nDesea modificar la pelicula s/n :");
       rta= tolower(getche());
       if(rta=='s')
       {

          while(seguir=='s')
          {
            printf("\n******MENU DE CAMBIOS******\n");
            printf("1- Cambiar titulo\n");
            printf("2- Cambiar genero\n");
            printf("3- Cambiar duracion de la pelicula\n");
            printf("4- Cambiar descripcion\n");
            printf("5- Cambiar puntaje\n");
            printf("6- Cambiar imagen\n");
            printf("7- Salir");
            printf("\n********************************\n");

            scanf("%d",&opcion);

          switch(opcion)
          {
            case 1:
              printf("\nIngrese el nuevo titulo: ");
              fflush(stdin);
              gets((pelicula+i)->titulo);
              break;
            case 2:
               printf("Ingrese el nuevo genero: ");
               fflush(stdin);
               gets((pelicula+i)->genero);
               break;
            case 3:
               printf("Ingrese la duracion de la pelicula : ");
               fflush(stdin);
               gets((pelicula+i)->duracion);
               break;
            case 4:
              printf("Ingrese la nueva descripcion : ");
              fflush(stdin);
              gets((pelicula+i)->descripcion);
              break;
            case 5:
               printf("Ingrese el nuevo puntaje : ");
               fflush(stdin);
               gets((pelicula+i)->puntaje);
               break;
            case 6:
               printf("Link de imagen : ");
               fflush(stdin);
               gets((pelicula+i)->linkImagen);
               break;
            case 7:
                seguir = 'n';
                break;
          }
        }

         printf("Se han aplicado los cambios correctamente....\n");
       }
       else
       {
         printf("\nAccion cancelada!\n");
       }
    }
  }
  if(flag==0)
  {
    printf("ERROR!..Pelicula inexistente\n");
  }
 }
}

void guardarEnArchivo(EMovie *pelicula,int tamPel)
{
  FILE *lista;
  lista=fopen("peliculas.bin","wb");

  if(lista==NULL || pelicula==NULL)
  {
   printf("\nNo se puede guardar el archivo");
  }
  else
  {
    fwrite(pelicula,sizeof(EMovie),tamPel,lista);
    printf("\nLos cambios se guardaron con exito ");
    fclose(lista);
  }

}
void cargarDesdeArchivo(EMovie *pelicula,int tamPel)
{
  int flag;
  FILE *lista;

  lista=fopen("peliculas.bin","rb");
  if(lista==NULL || pelicula==NULL)
  {
     printf("Error al abrir el archivo\n");
  }

  else
  {
   fread(pelicula,sizeof(EMovie),tamPel,lista);
   printf("Datos cargados con exito :)\n");
   fclose(lista);
  }
}
void mostrarPorHTML(EMovie* pelicula,int tamPel)
{
  FILE *lista;
  char buffer[5000];
  char variable[50]="LISTA DE PELICULAS";
  int i;


   strcat(buffer,"<html><body bgcolor='black'");
   strcat(buffer,"<html><head><style>table, th, td {border: 1px solid black; border-collapse: collapse;}th, td { padding: 15px;}</style> </head><body><MARQUEE BGCOLOR=#FF0000><h1>");
   strcat(buffer,variable);
   strcat(buffer,"</h1></MARQUEE><br><br>");

   for(i=0;i<tamPel;i++)
   {
    if((pelicula+i)->estado==1)
    {

      strcat(buffer,"<body><p style='color:#FF0000'></p></body>");
      strcat(buffer,"<article class='col-md-4 article-intro'> <a href='#'> <img class='img-responsive img-rounded' src='");
      strcat(buffer,(pelicula+i)->linkImagen);
      strcat(buffer,"'alt=''> </a> <h3> <a href='#'><body><p style='color:#FF0000'>");
      strcat(buffer,(pelicula+i)->titulo);
      strcat(buffer,"</p></body></a> </h3> <ul> <li><body><p style='color:#FFFFFF'>Género: ");
      strcat(buffer,(pelicula+i)->genero);
      strcat(buffer,"</p></body></li> <li><body><p style='color:#FFFFFF'>Puntaje: ");
      strcat(buffer,(pelicula+i)->puntaje);
      strcat(buffer,"</p></body></li> <li><body><p style='color:#FFFFFF'>Duración: ");
      strcat(buffer,(pelicula+i)->duracion);
      strcat(buffer,"</p></body></li> </ul> <p><body><p style='color:#FFFFFF'>");
      strcat(buffer,(pelicula+i)->descripcion);
      strcat(buffer,"</p></body></p> </article>");
      strcat(buffer,"\n\n");
    }

   }
   lista = fopen("peliculas.html","w");
   fprintf(lista,buffer);
   fclose(lista);

}
void mostrarPorConsola(EMovie* pelicula,int tam)
{
  int i;
  printf("LISTA DE PELICULAS\n");
  if(pelicula!=NULL)
  {
   for(i=0;i<tam;i++)
   {
    if((pelicula+i)->estado==1)
    {
      printf("%s\t%s\t%s\t%s\n",(pelicula+i)->titulo,(pelicula+i)->duracion,(pelicula+i)->genero,(pelicula+i)->puntaje);
    }
   }
  }
}





















