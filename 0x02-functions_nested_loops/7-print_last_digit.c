#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @r: the number
 *
 * Return: value of the last digit
 */

int print_last_digit(int r)
{
	int ld;

	ld = r % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}

