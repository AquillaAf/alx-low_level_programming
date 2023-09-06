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
	int i;
	char *cat;
	int size1;
	int size2;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size1 = strlen(s1);
	size2 = strlen(s2);


	cat = malloc((size1 + size2) * sizeof(char) + 1);

	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
		{
			cat[i] = s1[i];
		}
		else
		{
			cat[i] = s2[i - size1];
		}
	}
	cat[i] = '\0';
	return (cat);
}
