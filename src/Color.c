/*
 * Color.c
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Defines.h"
#include "Color.h"
#include "utn.h"
/*
int initColores(Color listColores[], int size)
{
	int i;
	int ret= ERROR;
	if(listColores != NULL && size > ZERO)
	{
			for(i = ZERO; i < size; i++)
			{
				listColores[i].isEmpty = 1;
			}
			ret = OK;
	}
	return ret;
}*/
void printColor(Color color){
	printf("Id : %d - Descripción: %s\n",color.id,color.descripcion);
}

int printColores(Color listColores[], int size)
{
	printf("********** SECCIÓN MOSTRAR COLORES **********\n");
	int i;
	int ret = ERROR;
	if (listColores != NULL && size > ZERO)
	{
		for(i = ZERO; i < size; i++)
		{
			printColor(listColores[i]);
			ret = OK;
		}
	}
	printf("********** FIN SECCIÓN MOSTRAR COLORES **********\n");
	return ret;
}

Color setIdColor(Color listaColor[],int sizeColor)
{
	Color idColor;
	int indexColor, auxId;
	printColores(listaColor,sizeColor);
	if(getOption(&auxId,"Ingrese el id del color:\n", "ERROR, el id ingresado no pertenece a la lista. Reingrese:\n",
	   MIN_ID_COLOR, MAX_ID_COLOR, RETRIES) == OK && (indexColor = getColorById(auxId, listaColor, sizeColor) != ERROR))
	{
		idColor.id = auxId;
		strcpy(idColor.descripcion,listaColor[indexColor].descripcion);
	}
	return idColor;
}

int getColorById(int idToFind, Color listColores[], int sizeColor)
{
	int index=-1,i;
	if (listColores != NULL && sizeColor > 0 && idToFind > 0)
	{
		for(i = 0; i < sizeColor ; i++)
		{
			if(listColores[i].id >= MIN_ID_COLOR &&
			   listColores[i].id <= MAX_ID_COLOR &&
			   isAlphabetic(listColores[i].descripcion) &&
			   listColores[i].id == idToFind)
			{
				index = i;
				printf("Id COLOR : %d - Descripción: %s - index de la lista COLOR : %d\n",idToFind,listColores[i].descripcion,index);
				break;
			}
		}
	}
		return index;


}
