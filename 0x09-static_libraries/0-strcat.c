#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string
 * @dest: this is the destination of the fununction
 * @src: this is the home of the function in question
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int srclength = 0;
	int destlength = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlength++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclength++;
	for (i = 0 ; i <= srclength ; i++)
		dest[destlength + i] = src[i];
	return (dest);
}
