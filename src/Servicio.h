/*
 * Servicio.h
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */

#ifndef SERVICIO_H_
#define SERVICIO_H_

typedef struct
{
	int id; //comienza en 20000
	char descripcion[25];
	float precio;
	int isEmpty;
} Servicio;

int initServicios(Servicio listServicios[], int size);
void printServicio(Servicio servicio);
int printServicios(Servicio listServicios[], int size);
#endif /* SERVICIO_H_ */
