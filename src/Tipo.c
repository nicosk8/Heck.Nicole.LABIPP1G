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
/*
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
}*/
void printTipo(Tipo tipo){
	printf("Id : %d - Descripción: %s\n",tipo.id,tipo.descripcion);
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
			printTipo(listaTipos[i]);
			ret = OK;

		}
	}
	printf("********** FIN SECCIÓN MOSTRAR TIPOS **********\n");
	return ret;
}
Tipo setIdTipo(Tipo listaTipos[],int sizeTipo)
{
	Tipo idTipo;
	// recorro la lista de tipos para obtener el idTipo
	for(int i; i < sizeTipo; i++)
	{
		if(listaTipos[i].id >= 1000 && isAlphabetic(listaTipos[i].descripcion))
		{
			idTipo.id = listaTipos[i].id;
			strcpy(idTipo.descripcion,listaTipos[i].descripcion);

//			printf("::: ESTOY EN SET ID TIPO => ID: %d - DESCRIPCIÓN: %s\n",idTipo.id, idTipo.descripcion);

		}
	}
	return idTipo;
}

int getTipoById(int idToFind, Tipo listaTipos[], int sizeTipos)
{
	int index=-1,i;
	if (listaTipos != NULL && sizeTipos > 0 && idToFind > 0)
	{
		for(i = 0; i < sizeTipos ; i++)
		{
			if(listaTipos[i].id == idToFind)
			{
				index = i;
				break;
			}
		}
	}
		return index;


}
