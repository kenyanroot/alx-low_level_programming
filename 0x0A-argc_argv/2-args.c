#include <stdio.h>
/**
 * main- prints all arguements
 * @argc: prints number of command lines
 * @argv: array containing command line
 * Return: 0(succes)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
