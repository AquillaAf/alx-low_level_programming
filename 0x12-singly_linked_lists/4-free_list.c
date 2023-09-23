#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function free the list
 * @head: the pointer to thee first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	node = head;
	while(node != NULL)
	{
		free(node->str);
		free(node);
	node = node->next;
	}
	head = NULL;
}
