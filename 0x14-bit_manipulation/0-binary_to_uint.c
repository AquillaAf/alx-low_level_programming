#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts binary to integer
 * @b: pointer to the binary
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int count = strlen(b);
	int k;
	int power = count - 1;
	int shift = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b == NULL)
		{
			return (0);
		}
		if (b[i] == '1')
		{
			k = 1;
			shift = shift + (k << power);
			i++;
			power--;
		}
		if (b[i] == '0')
		{
			k = 0;
			shift = shift + k;
			i++;
			power--;
		}
	}
	return (shift);
}
