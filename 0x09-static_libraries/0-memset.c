#include "main.h"
/**
 *_memset - a function that fills memory with a constant byte.
 *@s: this is the memory area being pointed at
 *@b: this is the constant byte being returned
 *@n: this i the cgaracter in question
 *Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0 ; m < n ; m++)
		s[m] = b;
	return (s);
}
