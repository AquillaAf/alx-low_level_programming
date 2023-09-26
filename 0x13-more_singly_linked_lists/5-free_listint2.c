#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a linked list
 * @head: double pointer to the first node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *var;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		var = (*head)->next;
		free(*head);

		*head = var;
	}
	*head = NULL;
}
