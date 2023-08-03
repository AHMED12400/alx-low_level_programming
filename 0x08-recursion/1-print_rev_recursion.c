#include "main.h"

/**
 * _print_rev_recursion - Prints a string in revers
 * @s: type int string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (s[x] == '\0')
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
