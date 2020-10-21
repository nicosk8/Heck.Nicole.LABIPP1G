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
	printf("Id/Descripción: %d ->  %s\n",color.id,color.descripcion);
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
	// recorro la lista de colores para obtener el idColor
	for(int i; i < sizeColor; i++)
	{
		if(listaColor[i].id >= 1000 && isAlphabetic(listaColor[i].descripcion))
		{
			idColor.id = listaColor[i].id;
			strcpy(idColor.descripcion,listaColor[i].descripcion);
			//			printf("::: ESTOY EN SET ID COLOR => ID: %d - DESCRIPCIÓN: %s\n",listaColor[i].id,listaColor[i].descripcion);
		}

	}
	return idColor;
}
