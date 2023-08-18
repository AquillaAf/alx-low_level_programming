#include "main.h"
/**
 * print_most_numbers - function to print 0 -9  excluding some
 *
 */
void print_most_numbers(void)
{
	int r;

	for (r = 48; r <= 57; r++)
	{
		if (r == 50 || r == 52)
			continue;
		else
		_putchar (r);
	}
	_putchar ('\n');
}
