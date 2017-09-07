#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{

    char seguir='s';
    int opcion=0;
    float x;
    float y;
    float resultado;
    int flag=0;
    int flag2=0;
    int factoreo;




    while(seguir=='s')
    {
        printf("                                             \n");
        printf("*********************************************\n");
        printf("*********************************************\n");
        printf("**   1- Ingresar 1er operando (A=x)        **\n");
        printf("**   2- Ingresar 2do operando (B=y)        **\n");
        printf("**   3- Calcular la suma  (A+B)            **\n");
        printf("**   4- Calcular la resta (A-B)            **\n");
        printf("**   5- Calcular la division (A/B)         **\n");
        printf("**   6- Calcular la multiplicacion (A*B)   **\n");
        printf("**   7- Calcular el factorial (A!)         **\n");
        printf("**   8- Calcular todas las operaciones     **\n");
        printf("**   9- Salir                              **\n");
        printf("*********************************************\n");
        printf("*********************************************\n");
        printf("                                             \n");

        scanf("%d",&opcion);





        switch(opcion)
        {

            case 1:
                printf("\nIngrese numero : ");//Pedimos un dato para "x"
                scanf("%f",&x);
                flag=1;

                break;
            case 2:
                printf("\nIngrese numero : ");//Pedimos un dato para "y"
                scanf("%f",&y);
                flag2=1;

                break;
            case 3:
                if(flag==1 && flag2==1)//Utilizacion de "banderas" para validar las operaciones, en este caso no se puede realizar las operaciones si uno de los numeros no es ingresado
                {
                   resultado=suma(x,y);// Retornamos la funcion "suma"
                   printf("\nLa suma es : %1.2f",resultado);
                }
                else
                {
                   printf("ERROR!, se necesita dos numeros para realizar la operacion");
                }
                break;
            case 4:
                if(flag==1 && flag2==1)
                {
                   resultado=resta(x,y);//Retornamos la funcion "resta"
                   printf("\nLa resta es : %1.2f",resultado);
                }
                else
                {
                   printf("ERROR!, se necesita dos numeros para realizar la operacion");
                }
                break;
            case 5:

                if(flag==1 && flag2==1)
                {
                    if(y!=0) //Utilizacion de if-else para contemplar errores, en este caso el divisor nunca puede ser 0
                   {
                    resultado=division(x,y);//En caso de que se cumpla la condicion , se retorna a la funcion "division"
                    printf("\nLa division es : %1.2f",resultado);
                   }
                   else
                   {
                   printf("\n ERRROR!, al dividir");//En caso de que no se cumpla la condicion, mostrara el mensaje de error
                   }
                }
                else
                {
                   printf("ERROR!, se necesita dos numeros para realizar la operacion");
                }

                break;
            case 6:
                if(flag==1 && flag2==1)
                {
                  resultado=multiplicacion(x,y);//Retornamos la funcion "multiplicacion"
                  printf("\nEl producto es : %1.3f",resultado);
                }
                else
                {
                   printf("ERROR!, se necesita dos numeros para realizar la operacion");
                }

                break;
            case 7:
                if(flag==1)
                {
                   if(x>0)
                   {
                     factoreo=factorial(x);//Si se cumple la condicion, retornamos la funcion "factorial"
                     printf("\nEl factorial del primer numero ingresado (x) es : %d ",factoreo);
                   }
                   else
                   {
                     printf("No existe el factorial del primer numero ingresado(x) ");//En caso de que no se cumpla, mostrara el mensaje de error
                   }
                }
                else
                {
                   printf("ERROR!, se necesita dos numeros para realizar la operacion");
                }

                break;
            case 8:// Todas las funciones realizadas anteriormente se ejecutaran en el case "8"

                if(flag==1 && flag2==1)
                {  resultado=suma(x,y);
                   printf("\nLa suma es : %1.2f",resultado);

                   resultado=resta(x,y);
                   printf("\nLa resta es : %1.2f",resultado);

                   if(y>0)
                   {
                    resultado=division(x,y);
                    printf("\nLa division es : %1.2f",resultado);
                   }
                   else
                   {
                   printf("\n ERRROR!, al dividir");
                   }

                   resultado=multiplicacion(x,y);
                   printf("\nEl producto es : %1.3f",resultado);
                }
                else
                {
                  printf("ERROR!, se necesita dos numeros para realizar las operaciones");
                }


                if(flag==1)
                {
                    if(x>0) // Utilizacion del if-else para contemplar errores, en este caso "x" debe ser mayo a 0, ya que no existe el factorial de numeros negativos
                    {
                      factoreo=factorial(x);
                      printf("\nEl factorial del primer numero ingresado (x) es : %d ",factoreo);
                    }
                    else
                    {
                      printf("No existe el factorial del primer numero ingresado(x) ");
                    }
                }
                else
                {
                  printf("\nERROR!, no ingreso el primer numero (A) para calcular el factoreo ");
                }
                break;


            case 9:
                seguir = 'n';//Salida del menu de opciones
                break;



        }


    }




    return 0;
}
