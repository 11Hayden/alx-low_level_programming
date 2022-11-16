#include "3-calc.h"
/**
* main - entry point
* @argc: argument count
* @argv: argument vetor
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int a, b;
	int (*operate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	operate = get_op_func(argv[2]);

	if (operate == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operate(a, b));
	return (0);
}
