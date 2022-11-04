#include "main.h"
/**
* _memset - to fill memory with a constant byte
* @s: character
* @b: another character
* @n: integer
* Return: returns a pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
return (s);
}
