#include "main.h"
#include <stdio.h>

/**
 * @_memcpy: function copies n bytes from memory area src to memory area dest
 * @dest: type char pointer
 * @src: type char memory area
 * @n: type char bytes from src to dest
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
