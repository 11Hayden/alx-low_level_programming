#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 10; a < 20; a++)
	{
		putchar((a % 10) +  '0');
	}
	putchar('\n');
return (0);
}
