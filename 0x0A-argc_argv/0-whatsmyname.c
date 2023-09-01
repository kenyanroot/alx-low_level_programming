#include <stdio.h>
/**
 * main -  prints its name, followed by a new line.
 * @argc: command line arguement number
 * @argv: array containing the command line arguement
 *
 * Return: 0(succes)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
