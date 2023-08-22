int _putchar(char c);
#include <stdio.h>
/**
 * print_array - n elements of an array of integers, followed by a new line.
 * @a: input array
 * @n: length of array
 *
 */
void print_array(int *a, int n)
{
	int i_o_a;

	for (i_o_a = 0; i_o_a < n; i_o_a++)
	{
		printf("%d", a[i_o_a]);
		if (i_o_a != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
