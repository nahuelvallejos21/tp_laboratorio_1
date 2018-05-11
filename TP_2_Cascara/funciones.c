
#include "funciones.h"
#include "stdio.h"
#include "conio.h"
#include "string.h"

void Mayuscula(char nombre[])
{
  int i;
  nombre[0]= toupper (nombre[0]);
  for(i=1;i<strlen(nombre);i++)
  {
    if(nombre[i-1]!=' ')
    {
      nombre[i]=tolower(nombre[i]);
    }
    else
    {
      nombre[i]=toupper(nombre[i]);
    }
  }

   printf("%s",nombre);
}


int obtenerEspacioLibre(EPersona lista[],int tam)
{
  int i;
  int index = -1;

  for(i=0;i<tam;i++)
  {
    if(lista[i].estado ==0)
    {
      index = i;
      break;
    }
  }
  return index;
}
int buscarPorDni(EPersona lista[],char dni[],int tam)
{
  int i;
  int index = -1;

  for(i=0;i<tam;i++)
  {
    if(lista[i].estado==1)
    {
      if(strcmp(lista[i].dni,dni)==0)
      {
        index = i;
        break;
      }
    }
  }

  return index;
}
int filtroDni(char dni[])
{
  int index = 0;
  if(strlen(dni)==8)
  {
    index = 1;
  }

  return index;
}
void inicializarEstados(EPersona lista[],int tam)
{
  int i;
  for(i=0;i<tam;i++)
  {
    lista[i].estado = 0;
  }
}
void cargarPesona(EPersona lista[],int tam)
{
  int i;
  int index;
  int flag;
  int flag2;
  char aux[10];

  index = obtenerEspacioLibre(lista,tam);
  if(index!=-1)
  {
    printf("Ingrese su DNI: ");
    fflush(stdin);
    gets(aux);
    flag2 = filtroDni(aux);

    if(flag2 == 1)
    {
      flag = buscarPorDni(lista,aux,tam);
      if(flag ==-1 )
      {
        strcpy(lista[index].dni,aux);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[index].nombre);
        printf("Ingrese edad: ");
        scanf("%d",&lista[index].edad);
        lista[index].estado = 1;

      }
      else
      {
        printf("Error!, DNI ya existente\n");
      }
    }
    else
    {
      printf("ERROR, el num de DNI debe contener 8 carcteres\n");
    }
  }
  else
  {
    printf("No hay mas espacio para ingresar nuevas personas\n");
  }
}
void borrarPersona(EPersona lista[],int tam)
{
  int index;
  char rta;
  char aux[10];
  printf("Ingrese el DNI: ");
  fflush(stdin);
  gets(aux);
  index = buscarPorDni(lista,aux,tam);

  if(index!=-1)
  {
    printf("Pesona encontrada......\n");
    printf("%s\t",lista[index].dni);
    Mayuscula(lista[index].nombre);
    printf("\t%d\n",lista[index].edad);
    printf("Desea dar de baja esta persona? s/n ");
    rta = tolower(getche());

    if(rta == 's')
    {
      lista[index].estado = 0;
      printf("\nPersona dada de baja correctamente....\n");
    }
    else
    {
      printf("\nAccion cancelada por el usuario\n");
    }

  }
  else
  {
    printf("ERROR!,DNI inexistente\n");
  }
}
void ordenarPersonas(EPersona lista[],int tam)
{
  int i,j;
  EPersona aux;

  for(i=0;i<tam-1;i++)
  {
    for(j=i+1;j<tam;j++)
    {
      if(stricmp(lista[i].nombre,lista[j].nombre)>0)
      {
         aux = lista[i];
         lista[i] = lista[j];
         lista[j] = aux;
      }
      if(strcmp(lista[i].nombre,lista[j].nombre)==0)
      {
        if(lista[i].edad > lista[j].edad)
        {
          aux = lista[i];
          lista[i] = lista[j];
          lista[j] = aux;
        }
      }

    }
  }
  //mostrarPersonas(lista,tam);

}
void mostrarPersonas(EPersona lista[],int tam)
{
  int i;
  printf("*********LISTA DE PERSONAS**********\n");
  ordenarPersonas(lista,tam);
  for(i=0;i<tam;i++)
  {
    if(lista[i].estado==1)
    {
     printf("%s\t",lista[i].dni);
     Mayuscula(lista[i].nombre);
     printf("\t%d\n",lista[i].edad);
    }
  }
}
void graficoEdades(EPersona usuario[],int tam)
{

  int flag=0;
  int i;
  int edad1=0;
  int edad2=0;
  int edad3=0;
  int rta;

   for(i=0; i<tam; i++)
    {
      if(usuario[i].estado==1)
      {
        if(usuario[i].edad<18)
        {
           edad1++;
        }
        else
        {
          if(usuario[i].edad>=18 && usuario[i].edad<=35)
          {
            edad2++;
          }
          if(usuario[i].edad>35)
          {
            edad3++;
          }
        }
      }
    }
    rta=edad1+edad2+edad3;


    for(i=rta; i>0; i--)
    {
      if(edad1 == i)
      {
        printf("*");
        edad1--;
      }
      printf("\t");
      printf("\t");
      printf("\t");
      if(edad2 == i)
      {
        printf("*");
        edad2--;
      }
      printf("\t");
      printf("\t");
      if(edad3==i)
      {
       printf("*");
       edad3 --;
       }
       printf("\n");
       flag=1;
    }
    if(!flag)
    {
      printf("no existe personas para mostrar el grafico\n");
    }
    printf("Menor de 18\tEntre de 19-35\tMayor de 35\n");

}
