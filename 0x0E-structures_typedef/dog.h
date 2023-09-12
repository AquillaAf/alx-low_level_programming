#ifndef DOG_H
#define DOG_H

/**
 * struct dog_t - structure for multiple data types
 * @name: 1st memb
 * @age: 2nd memb
 * @owner: 3rd memb
 *
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog_t *d);
void init_dog(struct dog_t *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
