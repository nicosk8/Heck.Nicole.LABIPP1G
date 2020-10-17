/*
 * Servicio.c
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */
#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"
#include "Bicicleta.h"
#include "Color.h"
#include "Servicio.h"
#include "Fecha.h"
#include "utn.h"

int initServicios(Servicio listServicios[], int size)
{
	int i;
	int ret= ERROR;
	if(listServicios != NULL && size > ZERO)
	{
			for(i = ZERO; i < size; i++)
			{
				listServicios[i].isEmpty = 1;
			}
			ret = OK;
	}
	return ret;
}
void printServicio(Servicio servicio){
	printf("Id/Descripción: %d ->  %s  - Precio: %.2f\n",servicio.id,servicio.descripcion,servicio.precio);
}

int printServicios(Servicio listServicios[], int size)
{
	printf("********** SECCIÓN MOSTRAR SERVICIOS **********\n");
	int i;
	int ret = ERROR;
	if (listServicios != NULL && size > ZERO)
	{
		for(i = ZERO; i < size; i++)
		{
			if(!listServicios[i].isEmpty)
			{
				printServicio(listServicios[i]);
				ret = OK;
			}
		}
	}
	printf("********** FIN SECCIÓN MOSTRAR SERVICIOS **********\n");
	return ret;
}
