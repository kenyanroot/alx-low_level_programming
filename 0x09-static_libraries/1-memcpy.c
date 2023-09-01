#include "main.h"
/**
 *_memcpy -  copies n bytes from memory area
 * @dest: this is the destination of the copied bytes
 * @src: this is the source of the copied bytes
 * @n: this is an unsigned integer
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0 ; r < n ; r++)
	dest[r] = src[r];
	return (dest);

}
