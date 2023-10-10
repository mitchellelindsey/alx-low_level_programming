#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print the struct
 * @d: the new dog d
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(*d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", (*d).owner);
	}
}
