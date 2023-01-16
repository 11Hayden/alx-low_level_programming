#include "main.h"
/**
* _isalpha - to test if characters is an alphabet
* @c:  is the variable
* Return: 1 if it is lowercase else 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return  (1);
	else
		return (0);
}
