/*
 * =====================================================================================
 *
 *       Filename:  andorian_hw8_task2.c
 *       	Usage:  ./andorian_hw8_task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/30/2017 06:26:51 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Braxton Greenwell (), braxtongreenwell@mail.weber.edu
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 51
/* Function Prototypes */
void Usage(char** info);
char GetOptions(char* argv);
void PrintOption(char option);
/* Main Program */
int main(int argc, char *argv[])
{
	char opt;
	if(argc != 2)
	{
		Usage(argv);
	}
	else if(strcmp(argv[1], "--help") ==0)
	{
		Usage(argv);
	}
	opt = GetOptions(argv[1]);

	PrintOption(opt);
	
	return 0;
}


/* Function Defenitions */
void Usage(char** info)
{
	printf("Missing or wrong number of parameters\n");
	printf("Usage: ./task2 [-p | -u | -l]\n");
	exit(1);
	return;
}
char GetOptions(char* argv)
{
	
	char* option;
	

	if(strcmp(argv, "-p") == 0 || strcmp(argv, "-u") == 0 || strcmp(argv, "-l") == 0)
	{
		option = strtok(argv, "-");
	}
	else
	{
		printf("%s is an invalid option; using default (-p)\n", argv);
		option = "p";
	}
	printf("Selection option %c\n", *option);


	return *option;
}

void PrintOption(char option)
{
	char str1[MAX];
	char str2[MAX];
	int i = 0;
	float end;
	
	
	printf("Type input, Output will be based on option.\n");
	printf("Enter Ctrl-c to stop user input: ");
	
	while(scanf("%f", &end) != EOF)
	{
		i = 0;
		while((str1[++i] = getchar()) != '\n')
		{
			if (option == 'u')
			{
				str2[i] = toupper(str1[i]);		//upper case
			}
			else if(option == 'l')		//print
			{
				str2[i] = tolower(str1[i]);
			}
			else
			{
				str2[i] = str1[i];
			}
			printf("%c", str2[i]);
		}
		printf("\n(next input or Ctrl-c)\n");
	}
	printf("\ndone\n");
	return;
}
