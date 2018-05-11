#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    char dni[10];

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro y tamaño del array
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona[],int);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro y el tamaño del array
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */

int buscarPorDni(EPersona[],char[],int);
/** \brief Valida el DNI
 *
 * \param char[] Recibe una cadena
 * \return int Si el dni es correcto devuelve 1 de lo contrario devuelve 0
 *
 */
int filtroDni(char[]);
/** \brief Inicializa los estados en 0
 *
 * \param EPersona[] Dato de tipo Epersona
 * \param int Dato de tipo entero
 * \return void No retorna nada
 *
 */
void incializarEstados(EPersona[],int);
/** \brief Carga un dato de tipo EPersona en el array
 *
 * \param EPersona[]  Dato de tipo Epersona
 * \param int Dato de tipo entero
 * \return void No retorna nada
 *
 */
void cargarPesona(EPersona[],int);
/** \brief Pone el estado en 0 del dato EPersona indicado
 *
 * \param EPersona[] Dato de tipo Epersona
 * \param int Dato de tipo entero
 * \return void  No retorna nada
 *
 */
void borrarPersona(EPersona[],int);
/** \brief Ordena los datos de forma creciente
 *
 * \param EPersona[] Dato de tipo Epersona
 * \param int Dato de tipo entero
 * \return void No retorna nada
 *
 */
void ordenarPersonas(EPersona[],int);
/** \brief Muestra los datos en el array
 *
 * \param EPersona[]  Dato de tipo Epersona
 * \param int Dato de tipo entero
 * \return void No retorna nada
 *
 */
void mostrarPersonas(EPersona[],int);
/** \brief Muestra la cadena con la primera letra en Mayus
 *
 * \param char[] Recibe una cadena
 * \return void No retorna nada
 *
 */
void Mayuscula(char[]);
void graficoEdades(EPersona[],int);

#endif // FUNCIONES_H_INCLUDED
