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
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			else if (*argv[i] < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
	printf("%d\n", sum);
	}
return (0);
}
