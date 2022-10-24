#include "main.h"
/**
* _puts - to print a string
* @str: character
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
