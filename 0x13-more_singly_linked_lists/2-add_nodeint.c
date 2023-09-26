#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function add a new node to the start of list
 * @head: a pointer that points to a pointer variable
 * @n: the data for the new node
 *
 * Return: the address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *var;

	var = malloc(sizeof(listint_t));

	if (var == NULL)
	{
		return (NULL);
	}
	else
	{
		var->n = n;
		var->next = (*head);

		(*head) = var;
	}
	return (var);
}
