#include "main.h"
/**
* cap_string - to convert first letter of a word to upper char
* @s: pointer
* Return: s[n]
*/

char *cap_string(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] >= 97 && s[n] <= 122)
			if (s[n - 1] == ' ' || s[n - 1] == '\n'
				|| s[n - 1] == '\t' || s[n - 1] == ','
				|| s[n - 1] == ';' || s[n - 1] == '.'
				|| s[n - 1] == '!' || s[n - 1] == '?'
				|| s[n - 1] == '"' || s[n - 1] == '('
				|| s[n - 1] == ')' || s[n - 1] == '{'
				|| s[n - 1] == '}' || s[n - 1] == 0)

				s[n] -= 32;
	}
return (s);
}
