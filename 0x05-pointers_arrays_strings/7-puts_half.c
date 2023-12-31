int _putchar(char c);
#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: input string
 *
 */
void puts_half(char *str)
{
	int f_string, h_string;

	f_string = 0;
	while (str[f_string] != '\0')
		f_string++;
	h_string = f_string / 2;

	if (f_string % 2 == 1)
		h_string++;
	while (h_string < f_string)
	{
		_putchar(str[h_string]);
		h_string++;
	}
	_putchar('\n');
}
