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
* str_concat - a function that concatenates two strings
* @s1: pointer 1
* @s2: pointer 2
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	dest = (char *) malloc(size * sizeof(char));
	if (dest == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dest + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dest + i) = *(s2 + j);
		i++;
	}
return (dest);
}
