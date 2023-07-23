#include <stdio.h>

/**
 * main print lowercase in reverse
 * Return: 0 and exit program
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
		putchar('\n');
	return (0);
}
