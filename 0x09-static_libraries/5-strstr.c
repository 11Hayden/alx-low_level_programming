#include "main.h"
/**
* _strstr - to locate a substring
* @haystack : pointer
* @needle: another pointer
* Return: returns a pointer to s
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
	haystack++;
	}
return ('\0');
}
