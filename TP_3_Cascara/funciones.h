#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
    char titulo[50];
    char genero[20];
    char duracion[10];
    char descripcion[350];
    char puntaje[10];
    char linkImagen[100];
    int estado;
}EMovie;

/**
 *  Busca el primer espacio libre del array
 *  @param Recibe un dato de tipo estructura y el tamaño de dicho dato
 *  @return retorna 0,si enconto espacio o -1 si no encontro espacio
 */
int buscarLibre(EMovie[],int);
/**
 *  Carga datos en la estructura EMovie
 *  @param Recibe un dato de tipo estructura y el tamaño de dicho dato
 */
void cargarPeli(EMovie[],int);
/**
 *  Elimina la estructura asignada por el usuario
 *  @param Recibe un dato de tipo estructura y el tamaño de dicho dato
 */
void eliminarPelicula(EMovie[],int);
/**
 *  Modifica los datos de la estructura, asignada por el usuario
 *  @param Recibe un dato de tipo estructura y el tamaño de dicho dato
 */
void modificarPelicula(EMovie[],int);
/**
 *  Crea un archivo binario, y escribe los datos de la estructura en el archivo
 *  @param Recibe un dato de tipo estructura y el tamaño de dicho dato
 */
void guardarEnArchivo(EMovie *,int);
/**
 *  Abre y lee los datos del archivo ya creado anteriormente
 *  @param Recibe un dato de tipo estructura y el tamaño de dicho dato
 */
void cargarDesdeArchivo(EMovie *,int);
/**
 *  Genera un archivo html a partir de las peliculas cargadas en el archivo binario.
 *  @param Recibe un dato de tipo estructura y el tamaño de dicho dato
 */
void mostrarPorHTML(EMovie[],int);


#endif // FUNCIONES_H_INCLUDED
