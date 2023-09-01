#include "main.h"

/**
 * _isalpha - prints the character whether in lower case or upper case
 *@c: character in question
 * Return: 1(alphabet) or 0(not alphabet)
 */



int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
