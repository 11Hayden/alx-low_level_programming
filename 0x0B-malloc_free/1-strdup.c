#include "main.h"
/**
* _strlen - to know lenght of a string
* @s: character
* Return: return len
*/
int _strlen(char *s)
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
* _memcpy -  copies n bytes from memory area src to memory area dest
* @dest: destination string
* @src: source string
* @n: integer
* Return: returns a pointer to s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
return (dest);
}

/**
* _strdup - a function that returns a pointer
* @str: pointer
* Return: pointer
*/
char *_strdup(char *str)
{
	char *s;
	size_t size = _strlen(str) + 1;

	if (str == 0)
	{
		return (NULL);
	}
	s = (char *) malloc(size * sizeof(char));
	if (s)
	{
		_memcpy(s, str, size);
	}
return (s);
}
