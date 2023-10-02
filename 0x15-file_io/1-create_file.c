#include "main.h"
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	int j;
	int k;
	
	if (filename == NULL)
	{
		return (-1);
	}
	j = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	k = write(j, text_content, strlen(text_content));
	
	if (j < 0 || k < 0)
	{
		return (-1);
	}
	close(k);

	return (1);
}
