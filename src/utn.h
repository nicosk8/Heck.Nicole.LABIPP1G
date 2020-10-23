/*
 * utn.h
 *
 *  Created on: Oct 16, 2020
 *      Author: nicol
 */

#ifndef UTN_H_
#define UTN_H_

/*
 * brief - Verifies a number character be numeric
 * param - string: string of characters
 * return -  returns 1 if it is numeric or -1 if it is not
 * */
int isNumeric(char *string);
int isAlphabetic(char string[]);
int isFloat(char *string) ;
int isValidDate(char string[]);
/*
 * brief - Obtain an integer to write it in a variable
 * param - pResult : variable that stores the number entered
 * return -  returns 1 if it could get a number  or -1 if it couldn't
 * */
int getInt(int *pResult);
/*
 * brief - Request a integer as an option
 * param - pResult: string of characters
 * param - message: option request
 * param - errorMessage: error message
 * param - min: minimum number to choose
 * param - max: maximum number to choose
 * param - retries: retries
 * return -  returns 1 if it could get a number  or -1 if it couldn't
 * */
int getOption(int *pResult, char *message, char *errorMessage,
			  int min, int max, int retries);
/*
 * brief - Show a menu and ask for and option
 * param - pResult: integer requested
 * param - message: requesting message
 * param - errorMessage: error message
 * param - retries: retries
 * return -  returns 1 if it could get a number  or -1 if it couldn't
 * */
int getNumber(int *pResult, char *message, char *errorMessage,
			  int retries);
/*
 * brief - get a float number
 * param - pResult : string of characters
 * return -  returns 0 if it could get the float or -1 if it couldn't
 * */
int getFloat(float *pResult);
/*
 * brief - get a character string
 * param - pResult : character string
 * param - message : request message
 * param - errorMessage : error messsage
 * param- retries : retries
 * return -  returns 0 if it could get the float or -1 if it couldn't
 * */
int getString(char* pResult, char* message,char* errorMessage,int retries);
/*
 * brief - Request a char as an option
 * param - pResult: result
 * param - message: option request
 * param - errorMessage: error message
 * param - min: minimum char posible
 * param - max: maximum char posible
 * param - retries: retries
 * return -  returns 1 if it could get a number  or -1 if it couldn't
 * */
int getCaracter(char *pResult, char *message, char *errorMessage, char minimun,char maximun, int retries);


#endif /* UTN_H_ */
