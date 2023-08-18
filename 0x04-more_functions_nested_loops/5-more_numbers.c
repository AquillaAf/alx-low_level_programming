#include "main.h"
/**
 * more_numbers - function to multiply an array
 *
 */
void more_numbers(void)
{
	int k;
	int i = 0;

	while (i < 10)
	{
		for (k = 0; k <= 14; k++)
		{
		if (k > 9)
		_putchar (k / 10 + '0');
		_putchar (k % 10 + '0');
		}
	_putchar ('\n');
	i++;
	}
}
