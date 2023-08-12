#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print base 16 numbers'
 * Return: always 0
 */
int main(void)
{
	int j;
	int k;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
	}
	for (k = 97; k <= 102; k++)
	{
		putchar(k);
	}
	return (0);
}
