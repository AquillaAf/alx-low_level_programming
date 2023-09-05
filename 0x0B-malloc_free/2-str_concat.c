#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - cancatenate two strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: a variable that carries the malloc
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j;
	char *cat;
	int size1 = 0;
	int size2 = 0;
	int total;

	if (s1 != NULL)
	while (s1[i++] != '\0')
	{
		size1++;
	}
	while (s2[i++] != '\0')
	{
		size2++;
	}
	total = size1 + size2;

	cat = malloc((total + 1) * sizeof(char));

	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
		cat[i] = s1[i];
	for (j = 0; j < size2; j++, i++)
		cat[i] = s2[j];

	cat[total] = '\0';
	return (cat);
}
