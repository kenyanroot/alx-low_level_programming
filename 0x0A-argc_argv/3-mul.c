#include <stdio.h>
#include <stdlib.h>
/**
 * main -  multiplies two numbers.
 * @argc: number of command line arguement
 * @argv: array with command line arguement
 * Return: 0(success) or 1(failure)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
