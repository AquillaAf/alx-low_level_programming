#include "main.h"
/**
 * string_toupper - change uppercase to lower case
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
