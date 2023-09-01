#include "main.h"
/**
 * _strpbrk -  locates the first occurrence in the string
 * @s: the string in question
 * @accept: another string
 * Return: a pointer to the byte s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
