#include "main.h"

/**
 * _isdigit - check number to c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	/* c is digit */
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
