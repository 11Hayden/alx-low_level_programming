#include "main.h"
/**
* _strdup - a function that returns a pointer
* @str: pointer
* Return: pointer
*/
char *_strdup(char *str)
{
	char *sa;
	unsigned int size, i;

	i = 0;
	size = 0;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[size])
		size++;

	sa = malloc((size + 1) * sizeof(char));

	if (sa == NULL)
	{
		return (NULL);
	}
	while ((sa[i] = str[i]) != '\0')
		i++;
return (sa);
}
