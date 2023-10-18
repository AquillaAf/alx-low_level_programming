#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head of the linked list
 * @head: a pointer to the head pointer
 *
 * Return: the data for head node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *deleted;

	if (*head == NULL)
		return (0);

	deleted = *head;
	data = deleted->n;

	*head = (*head)->next;
	free(deleted);
	deleted = NULL;

	return (data);

}
