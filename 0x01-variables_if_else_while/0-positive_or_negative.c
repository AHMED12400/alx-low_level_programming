#include <stdlib.h>
#include <time.h>
/**
* main use n variable
* description a program that give negative or positive or zero value
* Return: 0 and exit the program
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (int n < 0)
printf("is positive");
else if (int n <= 0)
printf("is zero");
else if (int n > 0)
printf("is negative");
return (0);
}
