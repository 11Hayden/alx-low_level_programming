#include "main.h"

/**
* _isupper - to determine if a character is uppercase
* @c: integer c
* Return: returns 1 if uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
