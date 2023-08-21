#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers are present
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int started = 0; /* This is to keep track if we've started reading numbers */

    for (int i = 0; s[i] != '\0'; i++)
    {
        /* Check for a sign */
        if (s[i] == '-' && !started)
            sign *= -1;
        else if (s[i] == '+' && !started)
            continue;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            started = 1;
            result = result * 10 + (s[i] - '0');
        }
        else if (started) /* Break if we encounter a non-number after numbers */
            break;
    }

    return (result * sign);
}
