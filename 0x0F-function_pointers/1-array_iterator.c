#include <stdio.h>
#include  "function_pointers.h"
/**
 * array_iterator - is a function that executes a function given as a parameter
 * @array: a set of number from 1 to 5
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: 0
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
