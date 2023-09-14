#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - function takes varaidic arguments, prints num
* @separator: string to be printed between num
* @n: number of int passed to the function
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int x;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(num, unsigned int);
		printf("%d", x);
		if (i != (n - 1) && separator != NULL)
		printf("%s ", separator);
	}
	printf("\n");
	va_end(num);
}
