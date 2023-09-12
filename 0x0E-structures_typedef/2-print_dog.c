#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print dog details
 * @d: points to the variable
 *
 * Return:
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		printf("name: (nil)");
	else
		printf("name: %s\n", d->name);
	if (d->age == 0.0)
		printf("age: (nil)");
	else
		printf("age: %f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)");
	else
	printf("owner: %s\n", d->owner);
}
