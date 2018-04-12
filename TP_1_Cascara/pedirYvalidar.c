#include <stdio.h>
#include "pedirYvalidar.h"

//CARACTER
char pedirCaracter(char mensaje[],int min,int max)
{
  char caracter;
  printf("Ingrese %s",mensaje);
  caracter = getche();
  caracter = validarCaracter(caracter,min,max,mensaje);

  return caracter;

}
char validarCaracter(char dato,int min,int max,char mensaje[])
{
  while(dato<min || dato>max)
  {
    printf("\nError!...Reingrese %s",mensaje);
    dato = getche();
  }

  return dato;

}
char pedirSoloCaracter(char mensaje[])
{
  char caracter;
  printf("Ingrese %s",mensaje);
  caracter = getche();

  return caracter;
}
//ENTERO
int pedirEntero(char mensaje[], int min,int max)
{
  int numero;
  printf("Ingrese %s",mensaje);
  scanf("%d",&numero);

  numero = validarEntero(numero,min,max,mensaje);

  return numero;
}
int validarEntero(int dato,int min,int max,char mensaje[])
{
  while(dato <min || dato>max)
  {
      printf("Error!: Reingrese %s",mensaje);
      scanf("%d",&dato);
  }

  return dato;

}
int pedirSoloEntero(char mensaje[])
{
   int numero;
   printf("Ingrese %s",mensaje);
   scanf("%d",&numero);

   return numero;
}

//FLOTANTES
float pedirFlotante(char mensaje[],float min,float max)
{
   float numero;
   printf("Ingrese %s",mensaje);
   scanf("%f",&numero);

   numero = validarFlotante(numero,min,max,mensaje);

   return numero;
}
float validarFlotante(float dato,float min,float max,char mensaje[])
{
  while(dato <min || dato>max)
  {
    printf("Error!...Reingrese %s",mensaje);
    scanf("%f",&dato);

  }

  return dato;
}
float pedirSoloFloat(char mensaje[])
{
  float dato;
  printf("Ingrese %s",mensaje);
  scanf("%f",&dato);

  return dato;
}
