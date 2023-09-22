#include "lists.h"
#include <stdio.h>
/**
 * print_list - print a list of the struct data
 * @h: pointer to the struct
 *
 * Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}
	return (l);
}
