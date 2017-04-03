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
void Usage(char** info);
char* StringIn(char* str1, char* str2);
/* Main Program */
int main(int argc, char *argv[])
{
	
	char* strIn;
	
	if(argc != 3 || (strcmp(argv[1], "--help") == 0))
	{
		Usage(argv);
	}
	strIn = StringIn(argv[1], argv[2]);
	
	if(strIn)
	{
		printf("<%s> fond in <%s>\n", argv[2], argv[1]);
	}
	else
	{
		printf("<%s> is not found in <%s>\n", argv[2], argv[1]);
	}
	printf("Returned string <%s>\n", strIn);
	return 0;
}


/* Function Defenitions */
void Usage(char** info)
{
 	printf("Usage ./task1 <str1> <str2>\n");
 	printf("Program checks if str2 is part of str1\n");
 	exit(1);

 return;
}

char* StringIn(char* str1, char* str2)
{
	int str2l = strlen(str2);
	char* null = '\0';

	do
	{
		if(strncmp(str2, str1, str2l) == 0)
		{
			null = str1;
		}
	}while (*str1++);
	return null;
}

