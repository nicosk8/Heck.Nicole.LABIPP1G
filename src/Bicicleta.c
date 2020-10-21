/*
 * Entidad1.c
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Defines.h"
#include "Bicicleta.h"
#include "Tipo.h"
#include "Color.h"
#include "Servicio.h"
#include "Fecha.h"
#include "utn.h"

int printOptionMenu(int *pOption) {

	int ret= ERROR;
	printf("********** MENU PRINCIPAL **********\n");
	printf("1- Altas Bicicleta\n");
	printf("2- Modificar Bicicleta\n");
	printf("3- Eliminar Bicicleta\n");
	printf("4- Listar Bicicletas\n");
	printf("5- Listar Tipos\n");
	printf("6- Listar Colores\n");
	printf("7- Listar Servicios\n");
	printf("8- Alta Trabajo\n");
	printf("6- Listar Trabajos\n");
	printf("0- Salir\n");
	printf("************************************\n");
	ret = getOption(pOption, MESSAGE_INSERT_OPTION,
			MESSAGE_ERROR_INSERT_OPTION, ERROR, SHOW_TRABAJO , RETRIES);
	return ret;
}

int initBicicletas(Bicicleta listBicicletas[], int size)
{
	int i;
	int ret= ERROR;
	if(listBicicletas != NULL && size > ZERO)
	{
			for(i = ZERO; i < size; i++)
			{
				listBicicletas[i].isEmpty = 1;
			}
			ret = OK;
	}
	return ret;
}


/****************** TOP PRINT BICICLETAS ********************************************/
void printBicicleta(Bicicleta bicicleta){
	printf(" - Id Bicileta: %d\n - Marca: %s\n - ID Tipo: %d\n - Descipción Tipo: %s\n -  ID Color: %d\n - Descipción Color: %s\n - Rodado: %.2f\n",bicicleta.id, bicicleta.marca, bicicleta.idTipo.id ,bicicleta.idTipo.descripcion, bicicleta.idColor.id,bicicleta.idColor.descripcion, bicicleta.rodado);
}

int printBicicletas(Bicicleta listaBicicletas[], int size)
{
	printf("********** SECCIÓN MOSTRAR BICICLETAS **********\n");
	int i;
	int ret = ERROR;
	printf("**** BICICLETAS CARGADAS : *****\n");
	if (listaBicicletas != NULL && size > ZERO)
	{
		for(i = ZERO; i < size; i++)
		{
			if(!listaBicicletas[i].isEmpty)
			{
				printBicicleta(listaBicicletas[i]);
				ret = OK;
			}else
			{	// este modulo entra al if y al else. Revisar *****
				printf("**** Lista vacía - No hay bibicletas para mostrar ****\n");
				break;
			}
		}
	}else{
		printf("::: ESTOY EN EL ELSE DEL PRINT BICICLETAS ::::");
	}
	printf("********** FIN SECCIÓN MOSTRAR BICICLETAS **********\n");
	return ret;
}
/****************** BOTTOM PRINT BICICLETAS ********************************************/

/****************** BOTTOM ADD BICICLETAS ********************************************/
int getFreeIndexBicicleta(Bicicleta listaBicicletas[], int size)
{
	int index = -1, i;
	for(i =0; i < size ; i++){
		if(listaBicicletas[i].isEmpty == 1){
			index = i;
			break;
		}
	}
	return index;
}
void getNewBicicletaData(char marca[],Tipo *idTipo,Color *idColor,float *rodado,Tipo listaTipos[], int sizeTipo, Color listaColor[],int sizeColor,float listRodados[],int sizeRodado)
{
	getString(marca,"Ingrese la marca de la bicicleta:\n",MSG_GETSTRING_ERROR,RETRIES);
	*idTipo  = setIdTipo(listaTipos,sizeTipo);
	*idColor = setIdColor(listaColor,sizeColor);
	*rodado  = getRodado(listRodados,sizeRodado);
}

Bicicleta setNewBicicleta(int currentId, char marca[],Tipo idTipo,Color idColor,float auxRodado)
{
	Bicicleta bicicleta;
	bicicleta.id = currentId;
	bicicleta.idTipo = idTipo;
	bicicleta.idColor = idColor;
	strcpy(bicicleta.marca,marca);
	bicicleta.rodado = auxRodado;
	bicicleta.isEmpty = 0;
	return bicicleta;
}
float getRodado(float listRodados[],int sizeRodado)
{
	float auxRodado;
	if(listRodados != NULL)
	{
		// recorro la lista de colores para obtener el rodado
		for(int i; i < sizeRodado; i++)
		{
			auxRodado = listRodados[i];
			printf("::: ESTOY EN SET RODADO => RODADO: %.2f",listRodados[i]);
		}
	}
	return auxRodado;
}
int addBicicleta(int freeIndex,Bicicleta listaBicicletas[],int currentId,int size,char marca[], Tipo idTipo, Color idColor,float rodado){
  	int ret = -1;
  	Bicicleta newBicicleta;
  	if(freeIndex < size && listaBicicletas!= NULL && currentId > 0 && size > 0 && marca != NULL /*&& idTipo != NULL && idColor != NULL*/ && rodado > 0)
 	{
  		newBicicleta = setNewBicicleta(currentId,marca,idTipo,idColor,rodado);
		listaBicicletas[freeIndex] = newBicicleta;
		listaBicicletas[freeIndex].isEmpty = 0;
		ret = 0;
 	}
  	return ret;
  }

void add(Bicicleta listaBicicletas[],int size ,int *idBicicleta, Tipo listaTipos[], int sizeTipo,Color listaColor[],int sizeColor, float listRodados[],int sizeRodado)
{
	printf("********** SECCION AGREGAR BICICLETAS **********\n");
	int freeIndex = getFreeIndexBicicleta(listaBicicletas,size);
	if(freeIndex != ERROR && freeIndex < size && listaTipos != NULL && listaColor != NULL && listRodados != NULL)
	{
		int currentId = *idBicicleta;
		char marca[LENGTH];
		Tipo idTipo = setIdTipo(listaTipos,sizeTipo);
		Color idColor = setIdColor(listaColor,sizeColor);
		float rodado = getRodado(listRodados,sizeRodado);

		getNewBicicletaData(marca,&idTipo,&idColor,&rodado,listaTipos,sizeTipo,listaColor,sizeColor,listRodados,sizeRodado);
		if(addBicicleta(freeIndex,listaBicicletas,currentId,size,marca,idTipo,idColor,rodado) == OK){
			currentId++;
			*idBicicleta = currentId;
			printf(":::: BICICLETA CARGADA EXITOSAMENTE !! ::::\n");
		}else
		{
			printf(":::: ERROR!! SIN ESPACIO PARA CARGAR LA BICICLETA ::::\n");
		}
	}else
	{
		printf(":::: ERROR AL CARGAR LA BICICLETA ::::\n");
	}
	printf("********** FIN SECCION AGREGAR BICICLETAS **********\n");
}

/****************** BOTTOM ADD BICICLETAS ********************************************/
