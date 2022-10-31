#include "main.h"
/**
* _strchr - to locate a character in a string
* @s: character
* @c: another character
* Return: returns a pointer to s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (s + i);
return ('\0');
}
