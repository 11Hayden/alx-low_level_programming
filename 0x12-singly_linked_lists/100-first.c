#include <stdio.h>
/**
* b4main - a function executed b4 the main function
*/

void __attribute__ ((constructor)) b4main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
