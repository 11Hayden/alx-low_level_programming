#include "main.h"
#include <stdio.h>
/**
* feerror - a function that checks if a file can be opened.
* @file_from: source file
* @file_to: destination file
* @argv: argument vector
*/
void feerror(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
		exit(99);
	}
}

/**
* main - entry point
* @argc: argument count
* @argv: argument vector
* Return: 0 always
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t charsno, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	feerror(file_from, file_to, argv);
	charsno = 1024;
	while (charsno == 1024)
	{
		charsno = read(file_from, buf, 1024);
		if (charsno == -1)
			feerror(-1, 0, argv);
		wr = write(file_to, buf, charsno);
		if (wr == -1)
			feerror(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				file_from);
		exit(100);
	}
	return (0);
}
