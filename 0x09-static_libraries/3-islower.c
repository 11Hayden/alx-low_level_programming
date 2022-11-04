#include "main.h"
/**
* _islower - to test if character is lowercase
* @c:  is the variable
* Return: 1 if it is lowercase else 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return  (1);
	else
		return (0);
}
