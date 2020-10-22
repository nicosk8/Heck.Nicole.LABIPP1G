/*
 ============================================================================
 Name        : Parcial1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"
#include "Bicicleta.h"
#include "Servicio.h"
#include "Tipo.h"
#include "Color.h"
#include "utn.h"
int main(void) {

	setbuf(stdout, NULL);
	fflush(stdin);
	Tipo listaTipos[QTY_TIPOS] = {{1000,"Rutera"},{1100,"Carrera"},{1200,"Mountain"},{1300,"BMX"}};
	Color listaColores[QTY_COLORES] = {{5000,"Gris"},{5100,"Negro"},{5200,"Blanco"},{5300,"Azul"},{5400,"Rojo"}};
	Servicio listaServicios[QTY_SERVICIOS] = {{20000,"Limpieza",250},{21000,"Parche",300},{22000,"Centrado",400},{23000,"Cadena",350}};
	float listRodados[QTY_RODADOS] = {20,26,27.5,29};
	Bicicleta listaBicicletas[QTY_BICILETAS];
	Trabajo listaTrabajos[QTY_TRABAJOS];
	int idBicicleta = 1,optionUser;

	// Inicio
	initBicicletas(listaBicicletas,QTY_BICILETAS);
//	initTipos(listaTipos,QTY_TIPOS);
//	initColores(listaColores,QTY_COLORES);
//	initServicios(listaServicios,QTY_SERVICIOS);
//	initTrabajos(listaTrabajos,QTY_TRABAJOS);

	// Programa principal
	do
	{
		printOptionMenu(&optionUser);
		switch (optionUser)
		{
			case ADD:
					add(listaBicicletas,QTY_BICILETAS,&idBicicleta, listaTipos,QTY_TIPOS,
					    listaColores,QTY_COLORES, listRodados,QTY_RODADOS);
					printf("::::ENTRÉ AL ADD::::\n");
				break;
			case MODIFY:
				modify(listaBicicletas,QTY_BICILETAS,listaTipos,QTY_TIPOS,listaColores,QTY_COLORES);
				break;
			case DELETE:
//				delete(listaBicicletas,QTY_BICILETAS);
				break;
			case SHOW_BICICLETAS:
				printBicicletas(listaBicicletas,QTY_BICILETAS);
				break;
			case SHOW_TIPOS:
				printTipos(listaTipos,QTY_TIPOS);
				break;
			case SHOW_COLORES:
				printColores(listaColores,QTY_COLORES);
				break;
			case SHOW_SERVICIOS:
				printServicios(listaServicios,QTY_SERVICIOS);
				break;
			case ADD_TRABAJO:
				break;
			case SHOW_TRABAJO:
				printTrabajos(listaTrabajos,QTY_TRABAJOS);
				break;
			case EXIT:
				printf("************ FIN DEL PROGRAMA ************\n");
				exit(0);
				break;
		}
	}while(optionUser != ERROR && optionUser != EXIT);
	return OK;
}
