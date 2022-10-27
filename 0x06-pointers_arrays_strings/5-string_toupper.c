#include "main.h"
/**
* string_toupper - to convert all lower characters of a string to upper char
* @s: pointer
* Return: s[n]
*/

char *string_toupper(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] >= 97 && s[n] <= 122)
			s[n] -= 32;
	}
return (s);
}
