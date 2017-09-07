
#include "funciones.h"
float suma(float numero1,float numero2)    //Funcion para poder sumar dos variables
{
    float suma;
    suma=numero1+numero2;
    return suma;
}
float resta(float numero1,float numero2)   //Funcion para poder restar dos variables
{
    float resta;
    resta=numero1-numero2;
    return resta;
}
float division(int numero1,int numero2) //Funcion para poder dividir dos variables
{
    float division;
    division=(float)numero1/numero2;

    return division;
}
float multiplicacion(float numero1,float numero2) //Funcion para obtener el producto de dos variables
{
  float producto;
  producto=numero1*numero2;
  return producto;

}
int factorial(int numero1)    //Funcion para obtener el factorial de una variable
{
    int i;
    long int factorial=1;


    for(i=numero1;i>0;i--)
    {
      factorial=factorial*i;

    }

    return factorial;
}
