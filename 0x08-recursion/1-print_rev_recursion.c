#include "main.h"

/**
 * _print_rev_recursion - Prints a string in revers
 * @s: type int string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{
		return;
	}
	_putchar(s[x]);
	--s;
	_print_rev_recursion(s);
}
