/*
 * Fecha.h
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */

#ifndef FECHA_H_
#define FECHA_H_
#include "Defines.h"
typedef struct
{
	int dia;
	int mes;
	int annio;
} Fecha;

Fecha getFecha();
#endif /* FECHA_H_ */
