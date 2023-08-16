#include <stdio.h>
#include "function_pointers.h"

/**
 * _print_name - prints a name as is
 * @name: name of the person
 * @f: address
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
	return f(name);
}
