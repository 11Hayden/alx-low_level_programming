#include "main.h"
/**
* print_diagonal - to print diagonally
* @n: integer
*/

void print_diagonal(int n)
{
int m, k;

	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			for ( k = 0; k <= m; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
