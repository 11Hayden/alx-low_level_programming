#include <stdio.h>
/**
* main - Entry Point
* Return: always 0 (Success)
*/
int main(void)
{
	int a, b, c;

		for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '8'; c++)
			{
			if (a < b && b < c)
			{
			putchar(a);
			putchar(b);
			putchar(c);
			}
			if (a == '7' && b == '8' && c == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
return (0);
}
