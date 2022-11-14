#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* init_dog - a function that initialize a variable of type struct dog
* @d: struct dog
* @name : name of dog
* @age : dog's age
* @owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
