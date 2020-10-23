/*
 * Trabajo.h
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */

#ifndef TRABAJO_H_
#define TRABAJO_H_
#include "Defines.h"
#include "Bicicleta.h"
#include "Fecha.h"
typedef struct
{
	int id; // autoincremental
// el tipo de dato Bicicleta idBicicleta no me lo toma, tengp que usarlo como int
	int idBicicleta;
	int idServicio;
	Fecha fecha;
	int isEmpty;
} Trabajo;
int isEmptyListTrabajos(Trabajo listaTrabajos[],int size);
int initTrabajos(Trabajo listTrabajos[], int size);
void printTrabajo(Trabajo trabajo);
int printTrabajos(Trabajo listaTrabajos[], int size);
int getFreeIndexTrabajo(Trabajo listaTrabajos[], int size);
/**/
int addTrabajo(int freeIndex,Trabajo listaTrabajos[],int currentId,int size,int idBicicleta, int idServicio,Fecha fecha);
/**/
Trabajo setnewTrabajo(int currentId, int idBicicleta,int idServicio,Fecha fecha);
#endif /* TRABAJO_H_ */




