#include "main.h"
/**
 * _isupper - checks if the character in question is in upper case
 * @c: this is the character in question
 * Return: 1(success) or 0(failure)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
