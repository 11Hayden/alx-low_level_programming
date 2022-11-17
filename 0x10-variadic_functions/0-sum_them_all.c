#include "variadic_functions.h"
/**
* sum_them_all - to sum all parameters
* @n: number of parametrs
* Return: returns all the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(print, n);
	for (i = 0; i < n; i++)
		sum += va_arg(print, int);
	va_end(up);
	return (sum);
}
