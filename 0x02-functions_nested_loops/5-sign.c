#include "main.h"
/**
* print_sign - to print signs when values are tested
* @n:  is the variable
* Return: 1 if it is greater than 0, -1 if it is less than 0, else 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return  (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
