#include "main.h"

/**
 * _strncat contain null
 * @dest: char string
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n < 0; j++, --n, i++)
	{
		dest[a] = src[b];
	}

	dest[i] = '\0';
	return (dest);
}
