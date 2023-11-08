#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print dog
 * @d: dog to print
 */


void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
