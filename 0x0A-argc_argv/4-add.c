#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  adds positive numbers.
 * @argc: number of command line
 * @argv: array containing command line
 * Return: 0(success) or 1(failure)
 */
int main(int argc, char *argv[])
{
	int m, n, add = 0;

	for (m = 1 ; m < argc ; m++)
	{
		for (n = 0 ; argv[m][n] != '\0' ; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[m]);
	}
	printf("%d\n", add);
	return (0);
}
