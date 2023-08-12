#include <stdio.h>
/**
 * main - Entry poin
 * Description: 'combination of single-digit numbers'
 * Return: always 0
 */
int main(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

