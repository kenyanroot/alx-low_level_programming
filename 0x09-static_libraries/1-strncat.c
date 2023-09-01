#include "main.h"
/**
 * _strncat - this is a function that concentrates two strings
 * @dest: this is the function destination
 * @src: this is the source of the function
 * @n: this is the function in question
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int b;

	for (b = 0 ; b < n && *src != '\0' ; b++)
	{
	dest[length + b] = *src;
	src++;
	}
	dest[length + b] = '\0';
	return (dest);

}
