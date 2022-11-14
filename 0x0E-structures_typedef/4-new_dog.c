#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strlen - to find length of string
* @s: pointer
* Return: return len
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
return (len);
}

/**
* _strcpy - to copy a string
* @dest: string destination
* @src: source string
* Return: return dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
return (dest);
}

/**
*new_dog - a new dog
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*Return: returns adog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *adog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	adog = malloc(sizeof(dog_t));
	if (adog == NULL)
		return (NULL);
	adog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (adog->name == NULL)
	{
		free(adog);
		return (NULL);
	}
	adog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (adog->owner == NULL)
	{
		free(adog->name);
		free(adog);
		return (NULL);
	}
	adog->name = _strcpy(adog->name, name);
	adog->age = age;
	adog->owner = _strcpy(adog->owner, owner);
return (adog);
}
