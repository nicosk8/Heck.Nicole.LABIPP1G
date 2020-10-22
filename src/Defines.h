/*
 * Defines.h
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */

#ifndef DEFINES_H_
#define DEFINES_H_
// arrays
#define QTY_TIPOS        4
#define QTY_RODADOS      4
#define QTY_COLORES      5
#define QTY_SERVICIOS    4
#define QTY_BICILETAS    4
#define QTY_TRABAJOS     4
#define SIZE_BUFFER   5000
#define LENGTH          25
// control
#define OK               0
#define ERROR 		    -1
#define ZERO             0
// switches
#define ON               1
#define OFF              0
// messagges
#define MESSAGE_INSERT_OPTION        "Ingrese una opcion: \n"
#define MESSAGE_ERROR_INSERT_OPTION  "Ingreso incorrectamente la opcion. Ingrese nuevamente: \n"
#define MESSAGE_CORRECT_IN           "Usuario ingresado exitosamente!\n"
#define MESSAGE_FULL_LIST            "No hay espacio para agregar nuevos empleados. Puede eliminar o borrar empleado\n"
#define MSG_GETSTRING_ERROR          "Error, debe ingresar sólo letras.\n"
#define MSG_NUMBER_ERROR             "Error, debe ingresar sólo números.\n"
#define MESSAGE_INSERT_ID            "Ingrese el ID que desea encontrar: \n"
#define MESSAGE_ERROR_ID             "Ingresó un ID inexistente, reingrese: \n"

// menu
#define ADD     	    1
#define MODIFY 		    2
#define MODIFY_MARCA    1
#define MODIFY_TIPO	    2
#define MODIFY_COLOR    3
#define MODIFY_RODADO   4
#define DELETE 		    3
#define SHOW_BICICLETAS 4
#define SHOW_TIPOS	    5
#define SHOW_COLORES    6
#define SHOW_SERVICIOS  7
#define ADD_TRABAJO     8
#define SHOW_TRABAJO    9
#define EXIT 		    0
// others
#define  RETRIES      	3
#define  MIN_ID_TIPO	1000
#define  MAX_ID_TIPO	1300


#endif /* DEFINES_H_ */
