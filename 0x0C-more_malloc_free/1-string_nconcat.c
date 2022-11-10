#include "main.h"
#include <limits.h>
/**
* _strlen - to know lenght of a string
* @s: character
* Return: return len
*/
unsigned int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(++s));
	}
}

/**
* string_nconcat - a function that concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: number of bytes
* Return: returns a pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	size_t i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		n = _strlen(s2);
	size = _strlen(s1) + n + 1;
	dest = malloc(sizeof(char) * size);
		if (dest == 0)
			return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		dest[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		dest[i] = s2[j];
			i++;
	}
	dest[i] = '\0';
return (dest);
}
