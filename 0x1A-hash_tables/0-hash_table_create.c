#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - a function pointer to create a hash table
 *
 * @size: size of the table
 *
 * Return: a pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return NULL;
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t*));	
return table;
}
