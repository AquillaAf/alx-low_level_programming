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
	int n;
	int mul = 1;

	if (argc > 1)
	{

		for (n = 0; n < argc; n++)
		{
			mul *=  atoi(argv[n]);
		}
		printf("%d\n", mul);
	}

	else
	{
		printf("Error");
	}
	return (1);
}
