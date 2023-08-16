#include  "function_pointers.h"
#include "main.h"
#include <stdio.h>

/**
 * array_iterator - is a function that executes a function given as a parameter
 * @array: a set of numbers and characters
 * @action: is a pointer to the function needed to use
 * @size: is size of array
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;
	if (array && size && action)

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
