#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n characters.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters to take from s2.
 *
 * Return: A pointer to the newly allocated space in memory, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Handle NULL strings as empty strings */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Find the length of the strings */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* If n is greater or equal to the length of s2, use the entire s2 */
    if (n >= len2)
        n = len2;

    /* Allocate memory for the new string */
    new_str = malloc(len1 + n + 1);
    if (new_str == NULL)
        return (NULL);

    /* Copy s1 into the new string */
    for (i = 0; i < len1; i++)
        new_str[i] = s1[i];

    /* Copy up to n characters from s2 into the new string */
    for (j = 0; j < n; j++)
        new_str[i + j] = s2[j];

    /* Null-terminate the new string */
    new_str[i + j] = '\0';

    return (new_str);
}

/* Test the function */
int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *concat;

    concat = string_nconcat(s1, s2, 3);
    if (concat != NULL)
    {
        printf("Concatenated string: %s\n", concat);
        free(concat);
    }

    return (0);
}
