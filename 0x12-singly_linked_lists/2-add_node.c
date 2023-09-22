#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add new node to the beginning of a list
 * @head: the leading pointer pointing to the first node
 * @str: the node to add
 *
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *jp;

	while (str[len])
	len++;

	jp = malloc(sizeof(list_t));
	if (jp == NULL)
	return (NULL);
	else
	jp->str = strdup(str);
	jp->len = len;
	jp->next = (*head);
	(*head) = jp;

	return (*head);
}
