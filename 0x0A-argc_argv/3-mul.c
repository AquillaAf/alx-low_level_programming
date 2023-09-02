#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arguments
 * @argc: number of arguments
 * @argv: string o argument
 *
 * Return: the multiples otherwise error
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
