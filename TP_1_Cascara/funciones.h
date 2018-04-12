#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



#endif // FUNCIONES_H_INCLUDED
/** \brief Realiza la suma de 2 numeros
 *
 * \param float Primer numero
 * \param float Segundo numero
 * \return int  Retorna resultado
 *
 */
float suma(float,float);
/** \brief Realiza la resta de 2 numeros
 *
 * \param float Primer numero
 * \param float Segundo numero
 * \return float Retorna resultado
 *
 */
float resta(float,float);
/** \brief Realiza la division de 2 numeros
 *
 * \param float Primer numero(dividendo)
 * \param float Segundo numero(divisor)
 * \return float Retorna resultado
 *
 */
float division(float,float);
/** \brief Realiza la multiplicacion de 2 numeros
 *
 * \param float Primer numero
 * \param float Segundo numero
 * \return float Retorna resultado
 *
 */
float multiplicacion(float,float);
/** \brief Realiza el factorial de un numero
 *
 * \param float Numero entero
 * \return int  Retorna el numero factoriado
 *
 */
int factorial(float);
/** \brief Muestra un mensaje con un numero exacto
 *
 * \param char[] Mensaje que se quiere mostrar
 * \param float  Numero que se quiere mostrar de forma exacta
 * \return void  No retorna nada
 *
 */
void mostrarResultado(char[],float);
/** \brief Verifica si se puede hacer el factoreo
 *
 * \param float Recibe el numero a validar
 * \return int Retorna 1 si se puede realizar el factoreo, devuelve 0 si ocurre lo contrario
 *
 */
int validarFactoreo(float);


