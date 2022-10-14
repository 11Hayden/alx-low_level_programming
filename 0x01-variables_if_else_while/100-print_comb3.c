#include <stdio.h>
/**
* main - Entry Point
* Return: always 0 (Success)
*/
int main(void)
{
	int a, b, c;

	c = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a != b)
			{
			putchar(a);
			putchar(b);
			}
			else if (a == b)
			{
				continue;
			}
			else if (a == 8 && b == 9)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
return (0);
}
