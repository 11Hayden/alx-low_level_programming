#include "main.h"
#include <limits.h>
/**
* array_range - a function that creates an array of integers
* @min: min integer
* @max: max integer
* Return: a pointer
*/
int *array_range(int min, int max)
{
	int *x;
	int y;

	if (min > max)
	{
		return (NULL);
	}
	x = malloc(sizeof(int) * (max - min) + 1);

	if (x == NULL)
		return (NULL);
	for (y = 0; min <= max; y++, min++)
		x[y] = min;
return (x);
}
