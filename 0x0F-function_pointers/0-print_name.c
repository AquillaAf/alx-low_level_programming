#include <stdlib.h>
#include "function_pointers.h"

/** print_name - prints name
 * @name: pointer to name
 * @*f: function pointer as an argument print_name
 *
 * Return: 
 */

void print_name(char *name, void (*f)(char *))
{
	f (name);
}
