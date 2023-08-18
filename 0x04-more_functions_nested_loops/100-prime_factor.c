#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 on success
 */
int main(void)
{
    unsigned long int n = 612852475143;
    unsigned long int p = 2;

    while (n != 1)
    {
        if (n % p == 0)
            n /= p;
        else
            p++;
    }

    printf("%lu\n", p);
    return (0);
}
