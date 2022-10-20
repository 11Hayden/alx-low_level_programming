#include "main.h"
/**
* print_diagonal - to print diagonally
* @n: integer
*/

void print_diagonal(int n)
{
int m, k;

		for (m = 0; m < n; m++)
		{
			for ( k = 0; k <= m; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (m < (n-1))
				_putchar('\n');
		}
		_putchar('\n');
}
