#include "main.h"
/**
* print_line - to print lines
* @n: integer
*/

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
