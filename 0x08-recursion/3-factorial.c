#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: the number to calculate its factorial
 *
 * Return: '-1' if the nmber is < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else 
	{
		return (n * factorial(n-1));
	}
}
