#include "stdlib.h"
#include "dog.h"

/**
 * init_dog - intialized a variable
 * @d: the variable that points to the fun
 * @name: para1
 * @age: para2
 * @owner: para3
 *
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
