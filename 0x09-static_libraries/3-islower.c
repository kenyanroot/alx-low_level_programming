#include "main.h"
/**
 * _islower - prints the character i it is in lower case
 *@c: character in question
 * Return: 1(success) or 0(failure)
 */


int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
