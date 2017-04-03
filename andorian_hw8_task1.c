/*
 * =====================================================================================
 *
 *       Filename:  andorian_hw8_task1.c
 *       	Usage:  ./andorian_hw8_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/30/2017 06:25:07 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Braxton Greenwell (), braxtongreenwell@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 51
/* Function Prototypes */
void Usage(void);
void StringIn(char* str1[], char* str2[]);
/* Main Program */
int main(int argc, char *argv[])
{
	
	char* str1[MAX];
	char* str2[MAX];
	//int n;

	*str1 = argv[1];
	*str2 = argv[2];
	
	if(argc == 3)
	{
		printf("<%s> <%s> \n", *str1, *str2);
	}
	else
	{
		Usage();
		exit(2);
	}
	return 0;
}


/* Function Defenitions */
void Usage(void)
{
 printf("Usage ./task1 <str1> <str2>\n");
 printf("Program checks if str2 is part of str1\n");
 exit(1);

 return;
}

void StringIn(char* str1[], char* str2[])
{
	
	return;
}

