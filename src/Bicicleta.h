/*
 * Entidad1.h
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */

#ifndef BICICLETA_H_
#define BICICLETA_H_
#include "Tipo.h"
#include "Color.h"
#include "Servicio.h"
#include "Trabajo.h"
#include "Fecha.h"



typedef struct
{	int id;
	char marca[LENGTH];
	Tipo idTipo;
	Color idColor;
	float rodado;
	int isEmpty;
} Bicicleta;



/*Brief initialize a field
 * Param listBicicletas[] is employees list
 * Param size  is the list's size
 * Return OK for success otherwise returns ERROR
 * */
int initBicicletas(Bicicleta listBicicletas[], int size);
/*Brief print a menu and request an option
 * Param pOption result where the number is saved
 * Return the option entered
 * */
int printOptionMenu(int *pOption);
/*Brief   muetsra una bicileta
 * Param  bicicleta es la entidad bicicleta
 * Return No return
 * */
void printBicicleta(Bicicleta bicicleta);
/*Brief   muetsra la lista de biciletas
 * Param  listaBicicletas es la lista de  bicicletas
 * param  size es el tamaño de la lista
 * Return No return
 * */
int printBicicletas(Bicicleta listaBicicletas[], int size);
/**/
void getNewBicicletaData(char marca[],Tipo *idTipo,Color *idColor,float *rodado,Tipo listaTipo[], int sizeTipo, Color listaColor[],int sizeColor,float listRodados[],int sizeRodado);
/**/
Bicicleta setNewBicicleta(int currentId, char marca[],Tipo idTipo,Color idColor,float auxRodado);
/**/
float getRodado(float listRodados[],int sizeRodado);
/**/
int addBicicleta(int freeIndex,Bicicleta listaBicicletas[],int currentId,int size,char marca[], Tipo idTipo, Color idColor,float rodado);
/**/
void add(Bicicleta listaBicicletas[],int size ,int *idBicicleta, Tipo listaTipos[], int sizeTipo,Color listaColor[],int sizeColor, float listRodados[],int sizeRodado);
/**/
int getBicicletaById(int idToFind, Bicicleta listaBicicletas[], int size);
/**/
int getModifyOption();
/**/
void modify(Bicicleta listaBicicletas[],int size,Tipo listaTipos[],int sizeTipos);
#endif /* BICICLETA_H_ */
