#include "funciones.h"
float suma(float numero1,float numero2)
{
   float resultado;
   resultado = numero1 + numero2;

   return resultado;
}
float resta(float numero1,float numero2)
{
  float resultado = numero1 - numero2;
  return resultado;
}
float division(float numero1,float numero2)
{
  float resultado = numero1/numero2;
  return resultado;
}
float multiplicacion(float numero1,float numero2)
{
  float resultado = numero1*numero2;
  return resultado;
}
int factorial(float numero1)
{
  int i;
  long int factorial = 1;
  for(i=numero1;i>0;i--)
  {
    factorial = factorial*i;
  }
  return factorial;
}
void mostrarResultado(char mensaje[],float numero)
{
   int partEntera;
   double partDecimal;

   partEntera = numero/1;
   partDecimal = numero-partEntera;

   if(partDecimal>0)
   {
     printf("%s %.2f ",mensaje,numero);
   }
   else
   {
     printf("%s %d ",mensaje,partEntera);
   }
}
int validarFactoreo(float numero)
{
   int retorno;
   int parteEntera;
   double parteDecimal;

   parteEntera = numero/1;
   parteDecimal = numero-parteEntera;

   if(parteDecimal==0 && numero>0)
   {
     retorno = 1;
   }
   else
   {
     retorno = 0;
   }
   return retorno;
}
