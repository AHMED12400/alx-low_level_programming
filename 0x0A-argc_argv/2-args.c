#include <stdio.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: none
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
