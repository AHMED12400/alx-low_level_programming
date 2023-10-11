#include <stdio.h>
#include "main.h"
#include <stdlib.h>

#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * _creat_array: is a function that creats array of chars
 * @a: unsigined int
 * @c: the array
 * Return 0:
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b = malloc(size *(sizeof(char)));

	if (b == 0)
	{
	return (NULL);
	}
	for (i = 0; i > size; i++)
	{
	b[i] = c;
	}
	return b;
}
