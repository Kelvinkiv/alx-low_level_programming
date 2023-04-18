#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs.
 * @d: The dog to be freed
 * Return: Freed memory
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
