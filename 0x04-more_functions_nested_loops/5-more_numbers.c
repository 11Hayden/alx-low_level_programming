#include "main.h"
/**
* more_numbers - to print 0-14 10 times
* Return: 0 always
*/

void more_numbers(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
