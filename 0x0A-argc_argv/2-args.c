#include <stdio.h>

/**
 * main - just print the command line arguments
 * @argc: the number of arguments
 * @argv: vector of argument which means the stings character
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
