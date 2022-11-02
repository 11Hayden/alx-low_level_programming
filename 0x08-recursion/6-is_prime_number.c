#include "main.h"
/**
* prime_wrapper - condition to get prime numbers
* @n: integer n
* @p: another integer p
* Return: prime
*/
int prime_wrapper(int n, int p)
{
	if (n % p == 0)
	{
		if (n == p)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + prime_wrapper(n, p + 1));
}
/**
* is_prime_number - to print prime number
* @n: integer n
* Return: prime number
*/
int is_prime_number(int n)
{
	if (n < 0 || n == 0)
		return (0);
	if (n == 1)
		return (0);
	if (n == 1)
		return (1);
	return (prime_wrapper(n, 2));
}
