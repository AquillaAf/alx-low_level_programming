#include <stdlib.h>
#include "hash_tables.h"
/*
 * key_index - function that gives us the index of a key
 *
 * @key: a string lateral of the key
 * @size: the size of the array of the hash table
 *
 * Return: the index where the key/value is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;
	return index;
}
