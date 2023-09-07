#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_digit(char *str);
void print_error_and_exit();

/**
 * main - Multiplies two numbers
 * @argc: Argument count
 * @argv: Argument values
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        print_error_and_exit();
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        print_error_and_exit();
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;

    printf("%d\n", result);
    return (0);
}

/**
 * is_digit - Checks if a string is a digit
 * @str: String to check
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
    int i, len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return (0);
        }
    }
    return (1);
}

/**
 * print_error_and_exit - Prints an error message and exits with status 98
 */
void print_error_and_exit()
{
    printf("Error\n");
    exit(98);
}
