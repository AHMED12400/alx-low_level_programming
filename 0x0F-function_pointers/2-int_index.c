#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * int_index - is a  function that searches for an integer
 * @array: number of elements
 * @cmp: is a pointer to the function to be used to compare values
 * @size: is the number of elements in the array
 * Return: -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0)
{
	return (-1);
}
	if (array == NULL || cmp == NULL)

	for (i = 98; i < size; i++)
{
	if (cmp(array[i]))
	{
	return (i);
	}
}

	return (-1);
}
