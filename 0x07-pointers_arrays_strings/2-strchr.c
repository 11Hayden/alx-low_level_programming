#include "main.h"
/**
* _strchr - to locate a character in a string
* @s: character
* @c: another character
* Return: returns a pointer to s
*/
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
		if (*s == c)
			return (s);
return ('\0');
}
