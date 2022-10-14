#include <stdio.h>
/**
* main - Entry Point
* Return: always 0 (Success)
*/
int main(void)
{
	int a;
	char hex[] = "0123456789abcdef";

		for (a = 0; a < 16; a++)
	{
		putchar(hex[a]);
	}
	putchar('\n');
return (0);
}
