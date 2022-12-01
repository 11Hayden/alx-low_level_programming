#include "main.h"
/**
* binary_to_uint - a function that converts a binary number to an unsigned int.
* @b : a pointer
* Return: 1 if successful or 0 if failed
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int basetwo = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		basetwo = 2 * basetwo + (b[i] - '0');
	}
return (basetwo);
}
