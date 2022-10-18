#include "main.h"
/**
* print_last_digit - to print the last digit of a given input
* @n:  is the variable
* Return: n if n>=0 else -n
*/
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
