#include "main.h"
/**
* leet - to encode a string to 1337
* @s: pointer
* Return: s
*/

char *leet(char *s)
{
	int n, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (s[n] == s1[m])
			{
				s[n] = s2[m];
			}
		}
	}
return (s);
}
