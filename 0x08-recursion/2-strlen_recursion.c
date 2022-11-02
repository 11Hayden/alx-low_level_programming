#include "main.h"
/**
* _strlen_recursion- to print out the length of a string
* @s: pointer s
* Return: 0 or _strlen
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
return (0);
}
