#include <stdlib.h>

int is_digit(char *str);
void print_error_and_exit();
char *int_to_str(int num);
void print_str(char *str);

/**
 * main - Multiplies two numbers
 * @argc: Argument count
 * @argv: Argument values
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char *result_str;

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
    
    result_str = int_to_str(result);
    print_str(result_str);
    free(result_str);

    return (0);
}

/**
 * is_digit - Checks if a string is a digit
 * @str: String to check
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
        {
            return (0);
        }
        str++;
    }
    return (1);
}

/**
 * print_error_and_exit - Prints an error message and exits with status 98
 */
void print_error_and_exit()
{
    char error_msg[] = "Error\n";
    write(1, error_msg, sizeof(error_msg) - 1);
    exit(98);
}

/**
 * int_to_str - Converts an integer to a string
 * @num: Integer to convert
 * Return: Pointer to the converted string
 */
char *int_to_str(int num)
{
    // Implementation here
}

/**
 * print_str - Prints a string to stdout
 * @str: String to print
 */
void print_str(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}
