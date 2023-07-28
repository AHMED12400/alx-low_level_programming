#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Function that copies a string.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int k = 0;
	int m = 0;

	while (k != n)
	{
		dest[k] = src[m];

		if (src[k] == '\0')
		{
			dest[m] = '\0';
			break;
		}
		k++;
		m++;
	}
	while (m != n)
		dest[m++] = '\0';

	return (dest);
}
