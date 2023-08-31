#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: points to the string to be calculated
 *
 * Return: i
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = i + _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
