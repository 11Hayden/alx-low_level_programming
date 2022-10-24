#include "main.h"
/**
* print_rev - to print the inverse of a string
* @s: character
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
