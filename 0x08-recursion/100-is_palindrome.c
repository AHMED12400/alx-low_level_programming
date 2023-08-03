#include "main.h"
#include <stdio.h>

/**
 * _palindrome - is a function that returns 1 if a string is a palindrome and 0 if not.
 * @int: type of int.
 * Return: 0 .
 */

int _strlen_recursion(char *s)
{
	if (*s == '/0')
	{
	return (0);
	}
	++s;
	return (1 + _strlen_recursion(s));
}

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
	return (1);
	else
	return (0);
}
