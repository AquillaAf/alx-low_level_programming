#include <string.h>
#include "main.h"
/**
 * append_text_to_file - file append text to existing file
 * @filename: pointer to the file
 * @text_content: text to append
 *
 * Return: 1 if successful -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wr, count = 0;

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
		return (1);

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	wr = write(op, text_content, count);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);
	return (1);
}
