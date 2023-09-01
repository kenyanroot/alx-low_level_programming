#include "main.h"
/**
 * _strlen - calculate the length of the string in question
 * @s: this is the string in quetion
 * Return: the size of the string in question
 */

int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		count++;
	return (count);
}
