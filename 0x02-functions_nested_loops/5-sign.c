#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: 'is the argument to do that'
 *
 * Return: return 1 if n > 0 , -1 if n < 0 otherwise return 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}


