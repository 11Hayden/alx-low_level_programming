#include <stdio.h>
/**
* main - Entry Point
* Return: always 0 (Success)
*/
int main(void)
{
	int a, b;

		for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			if (a != b)
			{
			putchar(a);
			putchar(b);
			}
			if (a == b)
			{
				continue;
			}
			if (a == '8' && b == '9')
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
	putchar('\n');
return (0);
}
