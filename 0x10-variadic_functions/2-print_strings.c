#include "variadic_functions.h"
/**
* print_strings - to print all parameters
* @separator: appears between each parameter
* @n: number of parametrs
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *s;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(print, char*);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(print);
}
