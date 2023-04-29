#include "dog.h"

/**
 * init_dog - it inits a variable of type dog
 * @d: this is a dog identification
 * @name: it si name of dog
 * @owner: it is the owner's name
 * @age: is the age of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
