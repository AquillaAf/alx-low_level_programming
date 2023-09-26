#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add new node at end of list
 * @head: pointer pointer to the new node
 * @n: data for new pointer
 *
 * Return: the address opf the new pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *var;
	listint_t *exist;


	var = malloc(sizeof(listint_t));
	if (var == NULL)
	{
		return (NULL);
	}
	else
	{
		var->n = n;
		var->next = NULL;
	}
	if (*head == NULL)
		*head = var;
	else
	{
		exist = (*head);
		while (exist->next != NULL)
			exist = exist->next;
		exist->next = var;
	}
	return (var);
}
