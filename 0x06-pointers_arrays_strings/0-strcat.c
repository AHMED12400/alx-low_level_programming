#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */


char *_strcat(char *dest, char *src)

{	
	int i, j;

	while (dest[i]!='\0')
	{
	       i++;
	}
	while (src[j]!= '\0')
	{
	dest[i] = src[j];
	i++;
	
	}
	dest[i] = '\0';
	return (dest);	


}
