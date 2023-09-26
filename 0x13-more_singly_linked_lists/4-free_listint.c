#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function frees a linked list
 * @head: a pointer to the first node in the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *del;


	while (head != NULL)
	{
		del = head->next;
		free(head);
		head = del;
	}
}
