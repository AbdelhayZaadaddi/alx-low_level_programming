#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a given name using a function pointer.
 *
 * @name: A pointer to the name string to be printed.
 * @f: A function pointer to the printing function.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
