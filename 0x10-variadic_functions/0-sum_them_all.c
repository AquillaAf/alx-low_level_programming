#include <stdarg.h>

/**
 * sum_them_all - return the sum o all parameters
 * @n: a const argument which is the no remaining preceding element
 * @...: remaining arguments
 *
 * Return: always 1
 */
int sum_them_all(const unsigned int n, ...)

{
	va_list argh;
	unsigned int i;
	unsigned int x = n;

	va_start(argh, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = x + va_arg(argh, unsigned int);
	}
	va_end(argh);

	return (x);
}
