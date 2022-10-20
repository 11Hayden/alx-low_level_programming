#include "main.h"
/**
* print_square -to print square
* @size: an integer
*/

void print_square(int size)
{
	int m, l;

	for (m = 0; m < size; m++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		if (m != size - 1)
		_putchar('\n');
	}
	_putchar('\n');
}
