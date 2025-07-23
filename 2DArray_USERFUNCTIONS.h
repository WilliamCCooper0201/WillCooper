// UserFunctions.h
#ifndef USERFUNCTIONS_H
#define USERFUNCTIONS_H


int getValidRows();

/*
* Function Name: getValidRows
*
* Input Parameters: 
*    n1: integer type number
*
* Description: Prompts the user for the number of rows, 1-10. Checks if user input is valid. Returns the number of rows.
*
* Return Value: integer type number
*    
*/

int getValidCols();

/*
* Function Name: getValidCols
*
* Input Parameters: 
*      n1: integer type number
*
* Description: Prompts the user fo the number of columns, 4-10. Checks if the user input is valid. Returns the number of columns.
*
* Return Value: integer type number
*/

void generateRandomArray(int array[][10], int rows, int cols);

/*
* Function Name: generateRandomArray
*
* Input Parameters: 
*    n1: integer type number
*    n2: integer type number
*
* Description: Returns a 2D array filled with randomly generated numbers from 0-99. 
* Size is determined by user, rows (1-10) and columns (4-10).  
*
* Return Value: void
*/

void print2DArray(int array[][10], int rows, int cols);

/*
* Function Name: print2DArray
*
* Input Parameters: 
*    n1: integer type number
*    n2: integer type number
*
* Description: Prints out 2D array to screen 
*
* Return Value: void
*/

void computeAndPrintAverages(int array[][10], int rows, int cols);

/*
* Function Name: computeAndPrintAverages
*
* Input Parameters: 
*    n1: integer type number
*    n2: integer type number
*
* Description: Calculates averages of each randomly
* generated row and prints to screen.
*
* Return Value: void
*/

#endif
