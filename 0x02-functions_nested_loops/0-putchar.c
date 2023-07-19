#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char message[] = "_putchar\n";
	int c;

	for (c = 0; message[i] != '\0'; i++)
	{
		/* Use the _putchar function to print each character */
		_putchar(message[c]);
	}

	return (0);
}                    
