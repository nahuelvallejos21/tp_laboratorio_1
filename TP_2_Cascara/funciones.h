#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;


void cargarPersona(EPersona[], int);
/**
 * En esta funcion se cargan los datos del usuario(nombre,DNI,edad).
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.
 * @return no retorna nada, ya que es un void
 */
void borrarPersona(EPersona[], int);
/**
 * En esta funcion se verifica si el DNI ingresado es el correcto, una vez hecha la verificacion ,se da la opcion al usuario de eliminar los datos de una persona.
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.
 * @return no retorna nada, ya que es un void
 */

void mostrarPersona(EPersona[],int);
/**
 * En esta funcion se muestran los datos de la persona que anteriormente se habian cargado.
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.
 * @return no retorna nada, ya que es un void
 */
void ordenarPersonas(EPersona[],int);
/**
 * La funcion ordena a las personas ingresadas por el nombre en forma alfabetica, utilizando el metodo del "burbujeo", y luego es mostrada por la funcion "mostar persona".
 * @param lista el array se pasa como parametro.
 * @param tamaño del array.
 * @return no retorna nada, ya que es un void
 */
int mostrarGraficosDeEdades(EPersona[],int);

#endif // FUNCIONES_H_INCLUDED



