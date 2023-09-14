#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function prints the string in its parametrr
* @separator: seperates the string
* @n: number of strings
*
*Return:
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *point;

	va_start(str, n);
	for (i = 0; i < n; i++)
		point = va_arg(str, char*);
		if (point == NULL)
		printf("(nil)");
		else
		printf("%s", point);
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);

	printf("\n");
}
