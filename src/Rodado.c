#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Defines.h"
#include "Rodado.h"
#include "utn.h"

void printRodado(float rodado){
	printf("Nro.: %.2f\n",rodado);
}
void printRodados(float listaRodados[], int sizeRodado)
{
	printf("********** SECCIÓN MOSTRAR RODADOS **********\n");
	int i;
	if (listaRodados != NULL && sizeRodado > ZERO)
	{
		for(i = ZERO; i < sizeRodado; i++)
		{
			printRodado(listaRodados[i]);
		}
	}
	printf("********** FIN SECCIÓN MOSTRAR RODADOS **********\n");
}

float getRodado(float listRodados[],int sizeRodado)
{
	float auxRodado;
	float rodado;
	int i;
	if(listRodados != NULL && sizeRodado > 0)
	{
		printRodados(listRodados,sizeRodado);
		printf("Ingrese el rodado:\n");
		getFloat(&auxRodado);
//		printf("::: RODADO SELECCIONADO: %.2f",auxRodado);

//		getFloatNumber(&auxRodado, "Ingrese rodado:\n", MSG_FLOAT_ERROR, RETRIES);
		for(i = 0; i<sizeRodado ; i++)
		{
			if(listRodados[i] == auxRodado)
			{
//				rodado = listRodados[i];
				rodado = auxRodado;
				printf("::: RODADO SELECCIONADO: %.2f",rodado);
			}else
			{
				printf("ERROR, el rodado ingresado es inválido\n");
			}
		}

	}
	return rodado;
}

