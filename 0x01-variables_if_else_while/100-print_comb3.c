#include <stdio.h>

/**
 * main - Prints specific combinations of two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	for (e = 0; e <= 9; e++)
	{
		for (i = e + 1; i <= 9; i++)
		{
			putchar(e + '0');
			putchar(i + '0');

			if (e == 8 && i == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
