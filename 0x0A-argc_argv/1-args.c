#include <stdio.h>
#include "main.h"
/**
* main - entry point
* @argc: integer
* @argv: pointer
* Return: can be 0
*/

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
return (0);
}
