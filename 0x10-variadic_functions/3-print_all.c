#include "variadic_functions.h"
/**
* print_all - to print all parameters
* @format: list of types of argument passed
*/
void print_all(const char * const format, ...)
{
	va_list print;
	unsigned int i = 0, j, k = 0;
	char *st;
	const char starg[] = "cifs";

	va_start(print, format);
	while (format && format[i])
	{
		j = 0;
		while (starg[j])
		{
			if (format[i] == starg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(print, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(print, double)), k = 1;
				break;
			case 's':
				st = va_arg(print, char*), k = 1;
				if (!st)
				{
					printf("(nil)");
					break;
				}
				printf("%s", st);
				break;
		} i++;
	}
printf("\n");
va_end(print);
}
