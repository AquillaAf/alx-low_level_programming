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
	int i;
	int size = 0;
	char * copy_str;

	
	if (str == NULL)
	{
		return NULL;
	}

	for (i = 0; i != '\0'; i++)
	{
		size++;
	}

	copy_str = malloc (size * sizeof(char));
	if (0)
	{
		return NULL;
	}
	strcpy(copy_str, str);
	
	return (copy_str);
}
