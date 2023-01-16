#include "main.h"
/**
* _strcat - to concatenate two strings
* @dest: string destination
* @src: source string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int l1, l2, j;

	l1 = l2 = 0;
	while (dest[l1] != '\0')
	{
		l1++;
	}
	while (src[l2] != '\0')
	{
		l2++;
	}
	for (j = 0; j <= l2; j++)
	{
		dest[l1 + j] = src[j];
	}
	return (dest);
}
