#include "main.h"
/**
* print_numbers - to print 0-9
* Return: 0 always
*/

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
