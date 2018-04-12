#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "pedirYvalidar.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float respuesta;
    float numero1 = 0;
    float numero2 = 0;
    int flag = 0;
    int estado;

    while(seguir=='s')
    {
        if(flag==0)
        {
          printf("                                                                   \n");
          printf("*******************************************************************\n");
          printf("*******************************************************************\n");
          printf("     1- Ingresar 1er operando (A=x)                                \n");
          printf("     2- Ingresar 2do operando (B=y)                                \n");
          printf("     3- Calcular la suma  (A+B)                                    \n");
          printf("     4- Calcular la resta (A-B)                                    \n");
          printf("     5- Calcular la division (A/B)                                 \n");
          printf("     6- Calcular la multiplicacion (A*B)                           \n");
          printf("     7- Calcular el factorial del 1er num ingresado (A!)           \n");
          printf("     8- Calcular todas las operaciones                             \n");
          printf("     9- Salir                                                      \n");
          printf("*******************************************************************\n");
          printf("*******************************************************************\n");
          printf("                                                                   \n");

          scanf("%d",&opcion);
        }
        else
        {
          printf("                                                                   \n");
          printf("*******************************************************************\n");
          printf("*******************************************************************\n");
          printf("     1- Ingresar 1er operando (%.2f)                               \n",numero1);
          printf("     2- Ingresar 2do operando (%.2f)                               \n",numero2);
          printf("     3- Calcular la suma  (%.2f + %.2f)                            \n",numero1,numero2);
          printf("     4- Calcular la resta (%.2f - %.2f)                            \n",numero1,numero2);
          printf("     5- Calcular la division  (%.2f / %.2f)                        \n",numero1,numero2);
          printf("     6- Calcular la multiplicacion (%.2f * %.2f)                   \n",numero1,numero2);
          printf("     7- Calcular el factorial (%.1f!)                              \n",numero1);
          printf("     8- Calcular todas las operaciones                             \n");
          printf("     9- Salir                                                      \n");
          printf("*******************************************************************\n");
          printf("*******************************************************************\n");
          printf("                                                                   \n");

          scanf("%d",&opcion);
        }


        switch(opcion)
        {
            case 1:
                numero1 = pedirSoloFloat("numero: ");
                flag = 1;
                break;
            case 2:
                numero2 = pedirSoloFloat("numero: ");
                flag=1;
                break;
            case 3:
                respuesta = suma(numero1,numero2);
                mostrarResultado("La suma es",respuesta);
                break;
            case 4:
                respuesta = resta(numero1,numero2);
                mostrarResultado("La resta es",respuesta);
                break;
            case 5:
                if(numero2>0)
                {
                  respuesta = division(numero1,numero2);
                  mostrarResultado("La division es",respuesta);
                }
                else
                {
                  printf("ERROR!...no se puede realizar la division");
                }
                break;
            case 6:
                respuesta = multiplicacion(numero1,numero2);
                mostrarResultado("La multiplicacion es",respuesta);
                break;
            case 7:

                estado = validarFactoreo(numero1);
                if(estado ==1)
                {
                  respuesta = factorial(numero1);
                  mostrarResultado("El factoreo es",respuesta);
                }
                else
                {
                  printf("ERROR!...no se pudo realizar el factoreo");
                }
                break;
            case 8:
                respuesta = suma(numero1,numero2);
                mostrarResultado("La suma es",respuesta);
                respuesta = resta(numero1,numero2);
                mostrarResultado("\nLa resta es",respuesta);

                if(numero2>0)
                {
                  respuesta = division(numero1,numero2);
                  mostrarResultado("\nLa division es",respuesta);
                }
                else
                {
                  printf("\nERROR!...no se puede realizar la division");
                }

                respuesta = multiplicacion(numero1,numero2);
                mostrarResultado("\nLa multiplicacion es",respuesta);

                estado = validarFactoreo(numero1);
                if(estado ==1)
                {
                  respuesta = factorial(numero1);
                  mostrarResultado("\nEl factoreo es",respuesta);
                }
                else
                {
                  printf("\nERROR!...no se pudo realizar el factoreo");
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
