#include <stdio.h>

/**
 * main - print all single digits base on 10 and zero
 * Return: 0 and exit the program
 */

int main(void)
{
        int number;

        for (number = 0; number < 10; number++)
        putchar(number + '0');
        putchar('\n');

        return (0);
}
