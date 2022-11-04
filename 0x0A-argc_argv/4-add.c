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
	int sum = 0, i, plus = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		plus = strtol(argv[i], &ptr, 10);
		if (*ptr == '\0')
		{
			sum += plus;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
printf("%d\n", sum);
return (0);
}
