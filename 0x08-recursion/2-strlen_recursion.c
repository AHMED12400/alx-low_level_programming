#include "main.h"

/**
 * _strlen_recursion - is a function that returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
{
	return (0);
} ++s;

	return (1 + _strlen_recursion(s));
}
