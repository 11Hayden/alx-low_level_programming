#include "main.h"
/**
* swap_int - to swap values of a and b
* @a: integer one
* @b: integer two
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
