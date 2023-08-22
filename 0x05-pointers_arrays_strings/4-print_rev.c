int _putchar(char c);
#include "main.h"
/**
 * print_rev - unction that prints a string, in reverse
 * @s: variable
 *
 */
void print_rev(char *s)
{
	int b = 0;

	while (s[b])
		++b;
	while (b--)
		_putchar(s[b]);
	_putchar('\n');
}
