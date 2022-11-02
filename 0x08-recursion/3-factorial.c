#include "main.h"
/**
* factorial - to print out the factorial of a given number
* @n: integer n
* Return: -1, 1 or factorial of a number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
