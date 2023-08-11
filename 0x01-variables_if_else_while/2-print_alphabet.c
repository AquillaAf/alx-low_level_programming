#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabet in lowercase'
 * return: Always 0
 */
int main()
{
	int n =97;

	while (n<=122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
