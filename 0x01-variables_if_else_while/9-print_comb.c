#include <stdio.h>
/**
* main - Entry Point
* Return: always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 10; a <= 19; a++)
	{
		putchar((a % 10) + '0');
	if (a == 19)
	{
		break;
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
return (0);
}
