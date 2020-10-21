/*
 * Trabajo.h
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */

#ifndef TRABAJO_H_
#define TRABAJO_H_

#include "Bicicleta.h"
#include "Fecha.h"
typedef struct
{
	int id; // autoincremental
//	Bicicleta idBicicleta;
	Servicio idServicio;
	Fecha fecha;
//	int isEmpty;
} Trabajo;

int initTrabajos(Trabajo listTrabajos[], int size);
void printTrabajo(Trabajo trabajo);
int printTrabajos(Trabajo listaTrabajos[], int size);

#endif /* TRABAJO_H_ */
