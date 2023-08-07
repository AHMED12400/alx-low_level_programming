#include "main.h"
#include <stdio.h>

/**
 * _strchr - is a function that locates a character in a string
 * @s: strings
 * @c: charactar
 * Return: poinyer
 *
 */

char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}

