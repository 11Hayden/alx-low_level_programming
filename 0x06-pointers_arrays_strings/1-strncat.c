#include "main.h"
/**
* _strncat - to concatenate two strings
* @dest: string destination
* @src: source string
* @n: intger
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
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
	for (j = 0; j < n && j <= l2; j++)
	{
		dest[l1 + j] = src[j];
	}
	return (dest);
}
