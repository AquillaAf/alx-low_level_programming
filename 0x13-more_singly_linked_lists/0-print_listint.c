#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the lnked lists
 * @h: variable pointer to each node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t var = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		var++;
		h = h->next;
	}
	return (var);
}
