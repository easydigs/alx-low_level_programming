#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that free struct pointer
 *
 * @d: pointer to free
 *
 * Return: NULL
 */

void free_dog(dog_t *d)
{
	if (d == 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
