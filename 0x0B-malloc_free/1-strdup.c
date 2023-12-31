#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - points to a string that is a parameter in the function
 * @str: points to a string
 *
 * Return: str that is copied
 * NULL if str is null
 */
char *_strdup(char *str)
{
	int size = 0;
	char *copy_str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	copy_str = malloc((size + 1) * sizeof(char));
	if (copy_str == NULL)
	{
		return (NULL);
	}
	strcpy(copy_str, str);
	return (copy_str);
}
