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
	int wr;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, strlen(text_content));

	if (op < 0 || wr < 0)
	{
		return (-1);
	}

	close(op);
	return (1);
}
