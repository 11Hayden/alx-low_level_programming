#include "main.h"
/**
* _strpbrk - a string for any of a set of bytes
* @s: pointer s
* @accept: another pointer accept
* Return: returns a pointer to s
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
return ('\0');
}
