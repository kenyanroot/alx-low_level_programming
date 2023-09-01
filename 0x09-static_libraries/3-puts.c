#include "main.h"
/**
 * _puts -prints a string followed by a new line
 * @str: this is the character in question
 * Return: void
 */

void _puts(char *str)
{
	int  z;

	for (z = 0 ; str[z] != '\0' ; z++)
		_putchar(str[z]);
	_putchar('\n');
}
