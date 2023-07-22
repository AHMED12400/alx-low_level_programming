#include <stdlib.h>
#include <time.h>
/** main - program that look at digit
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 5)
		printf("%d is greater than 5\n");
	else if (n = 0)
		printf("%d is 0\n");
	else (n > 6; && n< 0);
		printf("%d is less than 6 and not 0\n");
	return (0);
}
