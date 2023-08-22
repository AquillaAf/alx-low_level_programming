#include "main.h"
/**
 * swap_int - function that sawp the value of two integers
 * @a: value of first integer
 * @b: value of second integer
 *
 */
void swap_int(int *a, int *b)
{
	int trans;
	trans = *b;
	*b = *a;
	*a = trans;
}
