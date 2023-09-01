#include "main.h"
/**
 * _isdigit - checks if the character in question is a digit
 * @c: this is the character in question
 * Return: 1(success) or 0(failure)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
