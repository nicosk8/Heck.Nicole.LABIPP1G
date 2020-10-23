/*
 * Trabajo.c
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */
#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"

#include "Bicicleta.h"
#include "Trabajo.h"
#include "Color.h"
#include "Servicio.h"
#include "Fecha.h"
#include "utn.h"

int isEmptyListTrabajos(Trabajo listaTrabajos[],int size)
{
	int isEmpty=1;
	for(int i = 0; i<size; i++)
	{
		if(listaTrabajos[i].isEmpty != 1)
		{
				isEmpty = 0;
		}
	}
	return isEmpty;
}
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
}
void printTrabajo(Trabajo trabajo){
	printf("Id Trabajo: %d - Id Bicicleta: %d - Id Servicio: %d - Fecha : %d/%d/%d\n",trabajo.id ,trabajo.idBicicleta ,trabajo.idServicio, trabajo.fecha.dia, trabajo.fecha.mes, trabajo.fecha.annio);
}

int printTrabajos(Trabajo listaTrabajos[], int size)
{
	printf("********** SECCIÓN MOSTRAR TRABAJOS **********\n");
	int i;
	int ret = ERROR;
	if (listaTrabajos != NULL && size > ZERO)
	{
		for(i = ZERO; i < size; i++)
		{
			if(!listaTrabajos[i].isEmpty)
			{
				printTrabajo(listaTrabajos[i]);
				ret = OK;
			}else
			{
				printf("**** Lista vacía - No hay trabajos para mostrar ****\n");
			}
		}
	}
	printf("********** FIN SECCIÓN MOSTRAR TRABAJOS **********\n");
	return ret;
}

int getFreeIndexTrabajo(Trabajo listaTrabajos[], int size)
{
	int index = -1, i;
	for(i =0; i < size ; i++){
		if(listaTrabajos[i].isEmpty == 1){
			index = i;
			break;
		}
	}
	return index;
}

Trabajo setnewTrabajo(int currentId, int idBicicleta,int idServicio,Fecha fecha)
{
	Trabajo trabajo;
	trabajo.id = currentId;
	trabajo.idBicicleta = idBicicleta;
	trabajo.idServicio = idServicio;
	trabajo.isEmpty = 0;
	return trabajo;
}
int addTrabajo(int freeIndex,Trabajo listaTrabajos[],int currentId,int size,int idBicicleta, int idServicio,Fecha fecha){
  	int ret = -1;
  	Trabajo newTrabajo;
  	if(freeIndex < size && listaTrabajos!= NULL && currentId > 0 && size > 0 && idBicicleta != NULL > 0 && idServicio > 0)
 	{
  		newTrabajo = setnewTrabajo(currentId,idBicicleta,idServicio,fecha);
  		listaTrabajos[freeIndex] = newTrabajo;
  		listaTrabajos[freeIndex].isEmpty = 0;
		ret = 0;
 	}
  	return ret;
  }
