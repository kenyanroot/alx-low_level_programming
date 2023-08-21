#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * generate_random_password - Generate a random password
 * @length: length of the password to generate
 *
 * Return: A pointer to the generated password
 */
char *generate_random_password(int length)
{
    /* Characters to use in the password */
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";
    char *password = malloc(length + 1);
    int i;  /* Declare loop counter variable here */
    
    if (!password)
    {
        return NULL;
    }

    for (i = 0; i < length; i++)
    {
        int random_index = rand() % (sizeof(charset) - 1);
        password[i] = charset[random_index];
    }

    password[length] = '\0';

    return password;
}

int main(void)
{
    char *password;  /* Declare variable at the beginning of the function */

    /* Seed random number generator */
    srand(time(NULL));

    password = generate_random_password(PASSWORD_LENGTH);

    if (password)
    {
        printf("Generated Password: %s\n", password);
        free(password);
    }
    else
    {
        printf("Failed to generate a password.\n");
    }

    return 0;
}
