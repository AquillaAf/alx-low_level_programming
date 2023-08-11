#include <stdio.h>
/**
 * main - Entry point
 * Description: "printing lowercase and upper case alphabets"
 * Return: always 0
 */
int main(void)
{
	int s = 97;
	int b = 65;

	while (s <= 122)
	{
		putchar(s);
		s++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
