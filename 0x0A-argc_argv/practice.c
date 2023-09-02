#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add the int in argument
 * @argc: counts the number of command
 * @argv: strings of arguments
 *
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int j = 0;

	while (atoi(argv[j]) != '\0')
	{
		argv[j]++;
	
		if (atoi(argv[j]) == 'e')
		{
			printf("Error");
		}
	}
		for (i = 0; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (1);
}
