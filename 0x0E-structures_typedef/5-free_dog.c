#include "dog.h"

/**
 * free_dog - it frees dog
 * @d: is the dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
