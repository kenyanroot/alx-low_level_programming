#include <stddef.h>
#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: string wwhere the character is returned
 * @c: the function in question
 * Return: a pointer to first character access or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);

}
