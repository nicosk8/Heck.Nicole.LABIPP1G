/*
 * Trabajo.c
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */
#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"
#include "Trabajo.h"
#include "Bicicleta.h"
#include "Color.h"
#include "Servicio.h"
#include "Fecha.h"
#include "utn.h"
/*
int initTrabajos(Trabajo listTrabajos[], int size)
{
	int i;
	int ret= ERROR;
	if(listTrabajos != NULL && size > ZERO)
	{
			for(i = ZERO; i < size; i++)
			{
				listTrabajos[i].isEmpty = 1;
			}
			ret = OK;
	}
	return ret;
}*/
void printTrabajo(Trabajo trabajo){
//	printf("Id Trabajo: %d - Id Bicicleta: %d - Id Servicio/Descripci�n: %d  -> %s - Fecha : %d/%d/%d\n",trabajo.id ,trabajo.idBicicleta.id ,trabajo.idServicio.descripcion, trabajo.fecha.dia, trabajo.fecha.mes, trabajo.fecha.annio);
}

int printTrabajos(Trabajo listaTrabajos[], int size)
{
	printf("********** SECCI�N MOSTRAR TRABAJOS **********\n");
	int i;
	int ret = ERROR;
	if (listaTrabajos != NULL && size > ZERO)
	{
		for(i = ZERO; i < size; i++)
		{
			printTrabajo(listaTrabajos[i]);
			ret = OK;
		}
	}
	printf("********** FIN SECCI�N MOSTRAR TRABAJOS **********\n");
	return ret;
}
