/*
 * Tipos.h
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */

#ifndef TIPO_H_
#define TIPO_H_
typedef struct
{
	int id; // comienza en 1000
	char descripcion[20]; // max 20 char
	int isEmpty;
} Tipo;
/*Brief initialize isEmpty en 1
 * Param initTipos[] es la lista de tipos
 * Param size  es el tamaño de la lista
 * Return OK for success otherwise returns ERROR
 * */
int initTipos(Tipo listTipos[], int size);
/* imprime la entidad "Tipo"
 * tipo es la entidad
 * no devuelve valor
 * */
void printTipo(Tipo tipo);
/*imprime la lista de tipos
 * listaTipos es la lista de tipos
 * size es el tamaño de la lista
 *devuelve 0 por ok -1 (ERROR) por error
 * */
int printTipos(Tipo listaTipos[], int size);
#endif /* TIPO_H_ */
