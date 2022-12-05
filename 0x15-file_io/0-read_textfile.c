#include "main.h"
/**
* read_textfile -  a function that reads a text file and prints it
* to the POSIX standard output.
* @filename: the name of the file.
* @letters: the number of letters it should read and print.
* Return: value of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rf;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);
	rf = open(filename, O_RDONLY);
	if (rf == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	rd = read(rf, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	close(rf);
	free(buf);
	return (wr);
}
