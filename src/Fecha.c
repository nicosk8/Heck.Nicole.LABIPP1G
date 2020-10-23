#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Defines.h"
#include "Bicicleta.h"
#include "Tipo.h"
#include "Color.h"
#include "Rodado.h"
#include "Servicio.h"
#include "Fecha.h"
#include "utn.h"

Fecha getFecha(){
	Fecha fecha;
	int auxDia, auxMes, auxAnnio;
	getOption(&auxDia,"Ingrese el dia: \n","ERROR. EL dia debe ser menor a 30 dias.",1,30,RETRIES);
	getOption(&auxMes,"Ingrese el mes: \n","ERROR. EL mes debe ser menor a 12 meses.",1,12,RETRIES);
	getOption(&auxAnnio,"Ingrese el año: \n","ERROR. El año no debe ser menor ni mayor al año vigente.\n",MIN_ANNIO,MAX_ANNIO,RETRIES);
	fecha.dia = auxDia;
	fecha.mes = auxMes;
	fecha.annio = auxAnnio;
	return fecha;
}
