#include "main.h"
/**
* root_power - to get power of the root
* @n: integer n
* @p: power p
* Return: p or -1
*/
int root_power(int n, int p)
{
	if (p % (n / p) == 0)
	{
		if (p * (n / p) == n)
		{
			return (p);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + root_power(n, p + 1));
}
/**
* @n: integer
* Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (root_power(n, 2));
}
