#include "main.h"
/**
*_strlen - to know lenght of a string
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
