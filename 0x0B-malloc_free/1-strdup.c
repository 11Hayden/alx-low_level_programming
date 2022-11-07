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
* _strcpy - copies from memory area src to memory area dest
* @dest: destination string
* @src: source string
* Return: returns a pointer to s
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
	unsigned int size = _strlen(str) + 1;

	if (str == 0)
	{
		return (NULL);
	}
	s = (char *) malloc(size * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
_strcpy(s, str);
return (s);
}
