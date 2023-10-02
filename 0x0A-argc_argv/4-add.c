#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	int l;
	int m;
	int add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (l = 1; l < argc; l++)
		{
			for (m = 0; argv[l][m] != '\0'; m++)
			{
				if (!isdigit(argv[l][m]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[l]);
		}
	}
	printf("%d\n", add);
	return (0);
}

