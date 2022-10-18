#include "main.h"
/**
* print_alphabet_x10 - to print 10 lines of alphabets with main.h as header
* Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
int a;
	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
		for (a = 0; a < 10; a++)
		{
			_putchar('\n');
		}
	}
}
