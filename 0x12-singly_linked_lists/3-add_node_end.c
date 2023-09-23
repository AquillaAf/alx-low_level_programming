#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * count_len - count number of string
 * @c: the string to count
 *
 * Return: count
 */
int count_len(const char *c)
{
	unsigned int len = 0;
	int i = 0;

	while (c[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * add_node_end - function adds new node at end
 * @head: points to the first node
 * @str: the node to add
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *my_end;
	list_t *existed_node;

	my_end = malloc(sizeof(list_t));
	if (my_end == NULL)
	{
		return (NULL);
	}
	my_end->str = strdup(str);
	my_end->len = count_len(str);
	my_end->next = NULL;

	if (*head == NULL)
	{
		*head =  my_end;
	}
	else
	{
		existed_node = *head;
		while (existed_node->next != NULL)
			existed_node = existed_node->next;
	existed_node->next = my_end;
	}
	return (my_end);
}
