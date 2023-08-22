#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: the string variable
 *
 */
void rev_string(char *s)
{
	int l, z, y;
	char tmp;

	for (l = 0; s[l] != '\0'; l++)
	z = 0;

	y = l / 2;

	while (y--)
	{
		tmp = s[l - z - 1];
		s[l - z - 1] = s[z];
		s[z] = tmp;
		z++;
	}
}
