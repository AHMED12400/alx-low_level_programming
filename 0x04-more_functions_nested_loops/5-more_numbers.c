#include "main.h"

/**
 * main function that prints 10 times the numbers, from 0 to 14
 * Return: always
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
	for (j = 0; j <= 14; j++)
	{
		_putchar(i);
	}
	{
		_putchar(j);
	}	
		_putchar('\n');
}
