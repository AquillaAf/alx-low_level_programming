#include <string.h>
#include "main.h"
/**
 * create_file - creates a file and write to it
 * @filename: a pointer to the file name
 * @text_content: string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int j;
	int k, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	j = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (j == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
	{
		close(j);
		return (1);
	}
	k = write(j, text_content, count);
	if (j != count || k == -1)
	{
		return (-1);
	}
	close(j);

	return (1);
}
