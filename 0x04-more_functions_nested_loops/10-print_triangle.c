#include "main.h"
/**
* print_triangle - to print a triangle
* @size: integer
*/

void print_triangle(int size)
{
	int n, j;

	for (n = 0; n < size; n++)
	{
		for (j = 1; j < (size - n); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar('#');
		if (n < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
