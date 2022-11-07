#include "main.h"
/**
* create_array - a function that creates an array of chars
* @size: size of array
* @c : a character
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	char *f;
	unsigned int p;

	if (size == 0)
	{
		return (NULL);
	}
	f = (char *) malloc(size * sizeof(char));
	if (f == 0)
	{
		return (NULL);
	}
	else
	{
		p = 0;
		for (; p < size; p++)
		{
			*(f + p) = c;
		}
		return (f);
	}
}
