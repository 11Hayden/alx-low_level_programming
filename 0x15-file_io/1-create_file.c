#include "main.h"
/**
* create_file - a function that creates a file.
* @filename: the name of the file.
* @text_content: NULL terminated string
* Return: 1 on success and -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int rf, count, rw;

	if (!filename)
		return (-1);
	rf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (rf == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (count = 0; text_content[count]; count++)
		;
	rw = write(rf, text_content, count);
	if (rw == -1)
		return (-1);
	close(rf);
return (1);
}
