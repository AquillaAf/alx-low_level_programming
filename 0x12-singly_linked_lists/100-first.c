#include <stdio.h>
void __attribute__ ((construction)) print_before(void);
/**
 * print_before - function prints a function before it main
 *
 */
int print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
