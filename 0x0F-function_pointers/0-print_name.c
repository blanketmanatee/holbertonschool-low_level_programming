#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: char
 * @f: void
 */

void print_name(char *name, void (*f)(char *))
{
/* print_name returns void takes char pointer, void pointer, char pointer */
	if (name != NULL && f != NULL)
/*if name and f are not NULL */
		f(name);
/* name calls void pointer f to pass the function */
}
