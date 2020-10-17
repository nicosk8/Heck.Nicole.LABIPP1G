/*
 * Entidad1.c
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
	printf("Id Bicileta: %d - Marca: %s - Tipo: %d -> %s   Color: %d -> %s  - Rodado: %.2f\n",bicicleta.id, bicicleta.marca, bicicleta.idTipo.id ,bicicleta.idTipo.descripcion, bicicleta.idColor.id,bicicleta.idColor.descripcion, bicicleta.rodado);
}

int printBicicletas(Bicicleta listaBicicletas[], int size)
{
	printf("********** SECCIÓN MOSTRAR BICICLETAS **********\n");
	int i;
	int ret = ERROR;
	if (listaBicicletas != NULL && size > ZERO)
	{
		for(i = ZERO; i < size; i++)
		{
			if(!listaBicicletas[i].isEmpty)
			{
				printBicicleta(listaBicicletas[i]);
				ret = OK;
			}
		}
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

void getNewBicicletaData(int id,char marca,Tipo *idTipo,Color *idColor,float *rodado)
{
		printf("********** CARGAR DATOS PARA NUEVA BICICLETA **********\n");
		getString(marca,"Ingrese la marca :\n",MSG_GETSTRING_ERROR,RETRIES);
		*idTipo = getTipo();
		printf("********** FIN CARGAR DATOS PARA NUEVO EMPLEADO **********\n");
	}

}
void add(Bicicleta listaBicicletas[],int size ,int *idBicicleta, Tipo listaTipos[],Color listaColores[],int sizeColores, float listRodados[])
{
	int currentId = idBicicleta;
	char marca[LENGTH];
	Tipo idTipo;
	Color idColor;
	float auxRodado;

	int freeIndex = getFreeIndexBicicleta(listaBicicletas,size);
	printf("********** SECCION AGREGAR BICICLETAS **********\n");
	if(freeIndex != ERROR && freeIndex < size && listaTipos != NULL)
	{
		// recorro la lista de tipos para obtener el idTipo
		for(int i; listaTipos < size; i++){
			idTipo = listaTipos[i].id;

		}
		// recorro la lista de colores para obtener el idColor
		for(int i; listaColores < sizeColores; i++){
			idColor = listaColores[i].id;

		}
		// recorro la lista de rodados para obtener el auxRodado
		for(int i; listRodados < size; i++){
			auxRodado = listRodados[i];
		}
		// obtengo la marca

		getString(marca, "Ingrese la marca de la bicicleta:\n",MSG_GETSTRING_ERROR,RETRIES);
	}else
	{
		printf("No hay espacio para agregar más bicicletas");
	}


}





/****************** BOTTOM ADD BICICLETAS ********************************************/
