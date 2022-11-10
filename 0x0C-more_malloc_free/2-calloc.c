#include "main.h"
#include <limits.h>
/**
* _calloc - a function that allocates memory for an array, using malloc
* @nmemb: an unsigned integer
* @size: another integer
* Return: returns a pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == NULL || size == NULL)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
}
