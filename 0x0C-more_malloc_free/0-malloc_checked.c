#include "main.h"
#include <limits.h>
/**
* malloc_checked - a function that allocates memory using malloc
* @b: an integer
* Return: returns a pointer
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
