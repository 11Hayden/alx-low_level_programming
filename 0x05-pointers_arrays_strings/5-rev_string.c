#include "main.h"
/**
* rev_string - to print the reverse of a string
* @s: character
*/

void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp, *st;

	while (s[len] != '\0')
		len++;
	st = s;
	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(st + j);
			*(st + j) = *(st + (j - 1));
			*(st + (j - 1)) = temp;
		}
	}
}
