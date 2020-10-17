/*
 * Tipos.c
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Defines.h"
#include "Tipo.h"
#include "utn.h"

int initTipos(Tipo listTipos[], int size)
{
	int i;
	int ret= ERROR;
	if(listTipos != NULL && size > ZERO)
	{
			for(i = ZERO; i < size; i++)
			{
				listTipos[i].isEmpty = 1;
			}
			ret = OK;
	}
	return ret;
}
void printTipo(Tipo tipo){
	printf("Id/Descripción: %d ->  %s\n",tipo.id,tipo.descripcion);
}

int printTipos(Tipo listaTipos[], int size)
{
	printf("********** SECCIÓN MOSTRAR TIPOS **********\n");
	int i;
	int ret = ERROR;
	if (listaTipos != NULL && size > ZERO)
	{
		for(i = ZERO; i < size; i++)
		{
			if(!listaTipos[i].isEmpty)
			{
				printTipo(listaTipos[i]);
				ret = OK;
			}
		}
	}
	printf("********** FIN SECCIÓN MOSTRAR TIPOS **********\n");
	return ret;
}

