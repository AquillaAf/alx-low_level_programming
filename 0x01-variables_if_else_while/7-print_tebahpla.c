#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing base 10 numbers using putchar'
 * Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
