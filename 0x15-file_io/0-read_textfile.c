#include "main.h"
/**
 * read_textfile - read a text file and print to POSIX stdout
 * @filename: a pointer variable to the file
 * @letters: number of texts the program should read and print
 *
 * Return: the size of the texts, 0 if open, read or write call fn fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	ssize_t k;
	ssize_t j;
	ssize_t z;

	if (filename == NULL)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);

	k = open(filename, O_RDONLY);
	if (k == -1)
	{
		free(s);
		return (0);
	}

	j = read(k, s, letters);
	if (j == -1)
	{
		free(s);
		return (0);
	}
	z = write(STDOUT_FILENO, s, j);
	if (z == -1 || z != k)
	{
		free(s);
		return (0);

	}
	free(s);
	close(k);

	return (z);
}
