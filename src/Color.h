/*
 * Color.h
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */

#ifndef COLOR_H_
#define COLOR_H_
#include "Defines.h"
typedef struct
{
	int id; // comienza en 5000
	char descripcion[LENGTH];
} Color;

/*Brief initialize isEmpty en 1
 * Param initColores[] es la lista de tipos
 * Param size  es el tamaño de la lista
 * Return OK for success otherwise returns ERROR
 * */
int initColores(Color listColores[], int size);
/* imprime la entidad "cOLOR"
 * color es la entidad
 * no devuelve valor
 * */
void printColor(Color color);
/*imprime la lista de colores
 * listaColores es la lista de colores
 * size es el tamaño de la lista
 *devuelve 0 por ok -1 (ERROR) por error
 * */
int printColores(Color listColores[], int size);
/**/
Color setIdColor(Color listaColor[],int sizeColor);
#endif /* COLOR_H_ */
