#ifndef DOG_H
#define DOG_H
/**
* struct dog - a new struct for dog
* @name: name of dog
* @age: age of dog
* @owner: dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* @typedef: type definition 
* @dog_t: new struct of dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
