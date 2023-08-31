#include "main.h"

/**
 * as - helps to solve functiion
 * @nm: number
 * @ps: possible square
 *
 * Return: sqrt o number
 */
int as(int nm, int ps)
{
	if (ps * ps == nm)
	{
		return (ps);
	}
	else if ((ps * ps) > nm)
	{
		return (-1);
	}
		else
	{
			return (as(nm, ps + 1));
	}
}

/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to find its square root
 *
 * Return: square root of n
 * -1  otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (as(n, 0));
}
