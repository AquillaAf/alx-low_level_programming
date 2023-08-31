#include "main.h"

int cp(int n, int tool);
/**
 * is_prime_number - chack for prime numbers
 * @n: number to be checked
 *
 * Return: 1 if prime number, o if otherwise
 */
int is_prime_number(int n)
{
	return (cp(n, 2));
}

/**
 * cp - check all numbers < n if tghey divide it
 * @n: int
 * @tool: int
 *
 * Return: int
 */
int cp(int n, int tool)
{
	if (tool >= n &&  n > 1)
	{
		return (1);
	}
	else if (n % tool == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (cp(n, tool + 1));
	}
}
