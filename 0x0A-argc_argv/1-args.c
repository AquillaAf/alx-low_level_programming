#include <stdio.h>

/**
 * main - prints the number of arguments passed in the command line
 * @argc: gives number of command
 * @argv: gives the strings of characters in the command
 *
 * Return: o
 */
int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	argv[argc] = '\0';
	return (0);
}
