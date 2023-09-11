#include <stdio.h>

#define FILENAME __FILE__

/**
 * main - Prints the name of the file it was compiled from.
 * @void: No parameters.
 * Return: 0: Success.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
