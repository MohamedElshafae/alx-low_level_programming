#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  prints a struct dog
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
