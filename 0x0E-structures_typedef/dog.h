#include <stdio.h>

/**
 * main - a new type of struct 
 * Return: 0.
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
}

int main(void)

{
	struct dog dog;
	dog.name = "Poppy";
	dog.age = "3.5";
	dog.owner = "Bob";
	return (0);

}
