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
	int indexTipo, auxId;
	printTipos(listaTipos,sizeTipo);
	if(getOption(&auxId,"Ingrese el id del tipo:\n", "ERROR, el id ingresado no pertenece a la lista. Reingrese:\n",
			MIN_ID_TIPO, MAX_ID_TIPO, RETRIES) == OK && (indexTipo = getTipoById(auxId, listaTipos, sizeTipo) != ERROR))
	{
		idTipo.id = auxId;
		strcpy(idTipo.descripcion,listaTipos[indexTipo].descripcion);
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
			if(listaTipos[i].id >= MIN_ID_TIPO &&
			   listaTipos[i].id <= MAX_ID_TIPO &&
			   isAlphabetic(listaTipos[i].descripcion) &&
			   listaTipos[i].id == idToFind)
			{
				index = i;
				printf("Id TIPO : %d - Descripción: %s - index de la lista : %d\n",idToFind,listaTipos[i].descripcion,index);
				break;
			}
		}
	}
		return index;
}











