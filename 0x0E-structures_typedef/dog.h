#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for multiple data types
 * @name: 1st memb
 * @age: 2nd memb
 * @owner: 3rd memb
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
