#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function prints a name of person
 * @name: name of the person
 * @f: address or pointer
 * Return: f(name.
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
