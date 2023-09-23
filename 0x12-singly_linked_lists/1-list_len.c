#include "lists.h"
/**
 * list_len - count the number of element in the link
 * @h: the struct
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
