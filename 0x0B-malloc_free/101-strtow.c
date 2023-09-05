#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * number - Calculate number of words in a string.
 * @str: The string to check.
 * Return: The number of words in the string.
 */
int number(char *str)
{
	int a, num = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[a] != ' ' && str[a] != '\0'; a++)
				str++;
			num++;
		}
	}
	return (num);
}

/**
 * free_everything - Free allocated memory.
 * @string: The string to free.
 * @i: The counter.
 */
void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}

/**
 * find_next_word - Find the next word in a string and its length.
 * @str: The string to search.
 * @length: Pointer to store the length of the word.
 * Return: Pointer to the next word in the string.
 */
char *find_next_word(char *str, int *length)
{
	*length = 0;
	while (*str == ' ')
		str++;
	while (str[*length] != ' ' && str[*length] != '\0')
		(*length)++;
	return str;
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 * Return: NULL if the string is empty, NULL, or if the function fails.
 *         Otherwise, return a pointer to the array of words.
 */
char **strtow(char *str)
{
	int total_words = 0, b = 0, c = 0, length = 0;
	char **words, *found_word;

	if (str == 0 || *str == 0)
		return (NULL);
	total_words = number(str);
	if (total_words == 0)
		return (NULL);
	words = malloc((total_words + 1) * sizeof(char *));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' && b < total_words;)
	{
		str = find_next_word(str, &length);
		words[b] = malloc((length + 1) * sizeof(char));
		if (words[b] == 0)
		{
			free_everything(words, b);
			return (NULL);
		}
		for (found_word = str; c < length; c++)
			words[b][c] = found_word[c];
		words[b][c] = '\0';
		b++;
		c = 0;
		str += length;
	}
	return (words);
}
