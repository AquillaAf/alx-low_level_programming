#include <stdio.h>
/**
 *main - Entry point
 * Description: 'printing base 10 numbers using putchar'
 * Return: always 0
 */
int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar (k + 48);
	}
	putchar('\n');
	return (0);
}
