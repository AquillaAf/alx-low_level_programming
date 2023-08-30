#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: points to the string to be printed
 *
 */
void _puts_recursion(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
	}

	_putchar ('\n');
}
