#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - entry point
* @argc: integer
* @argv: pointer
* Return: can be 0
*/

int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
	printf("%d\n", mul);
	}
	else
	{
		printf("Error");
	}
return (0);
}
