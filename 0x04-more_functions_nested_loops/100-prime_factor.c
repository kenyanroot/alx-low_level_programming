#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int n = 612852475143;
    unsigned long int p = 2;

    while (n > 1)
    {
        if (n % p == 0)
        {
            n /= p;
        }
        else
        {
            p++;
        }
    }

    printf("%lu\n", p);
    return (0);
}

