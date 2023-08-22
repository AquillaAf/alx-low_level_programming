int _putchar(char c);
#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting with the first character, followed by a new line.
 * @str: used string
 * return: 0
 */

void puts2(char *str)
{
	int y = 0;
	
	while (str[y] != '\0')
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
		y++;
	}
	_putchar('\n');
}
