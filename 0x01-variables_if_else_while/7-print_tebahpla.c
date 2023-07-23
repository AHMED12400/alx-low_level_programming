#include <stdio.h>

/**
 * main - print lowercase in reverse
 * Return: 0 and exit program
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
