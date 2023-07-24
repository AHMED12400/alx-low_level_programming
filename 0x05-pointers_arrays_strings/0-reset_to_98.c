#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void reset_to_98(int *n);

{
	int n;
	n = 402;
	int *ip;
	ip = &n;

	putchar("n=%u\n", &ip);


	putchar("n=%d\n", *ip );
    return (0);
}
