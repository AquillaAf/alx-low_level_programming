#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function cat two strings
 * @s1: dest string
 * @s2: src string
 * @n: number of the character in s2 to cat
 *
 * Return: a pointer to the malloc of the cat strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int count1, count2;
	char *cat;

	count1 = strlen(s1);

	count2 = strlen(s2);

	if (n > count2)
	{
		cat = malloc((n + 1 + count1) * sizeof(char));
	}
	else
	{
		cat = malloc((count1 + count2 + 1) * sizeof(char));
	}

	if (cat == NULL)
	{
		return (NULL);
		free(cat);
		exit(1);
	}
	if (s1 == NULL || s2 == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < count1 + count2; i++)
	{
		if (i < count1)
			cat[i] = s1[i];
		else if (n >= count2 && i < count1 + count2)
			cat[i] = s2[i - count1];
		else if (i - count1 < n && n < (n + count1))
			cat[i] = s2[i - count1];
	}
	return (cat);
}
