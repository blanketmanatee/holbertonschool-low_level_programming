#include "dog.h"

/**
 * free_dog - frees dog
 * @d: dogs
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
	}
}
