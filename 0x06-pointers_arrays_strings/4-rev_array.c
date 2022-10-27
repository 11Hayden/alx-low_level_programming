#include "main.h"
/**
* reverse_array - to reverse a given array
* @a: the array
* @n: the length of array
*/

void reverse_array(int *a, int n)
{
	int temp = 0, i;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
