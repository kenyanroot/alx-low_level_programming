#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * number - Calculate the number of words in a string.
 * @str: The string to analyze.
 * 
 * Description: Counts the number of space-separated words in the string.
 * 
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
 * @string: The array of strings to free.
 * @i: The index up to which strings need to be freed.
 * 
 * Description: Helper function to free up allocated memory.
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
 * 
 * Description: Searches for the next space-separated word in the string.
 * 
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
 * allocate_and_copy_word - Allocates memory for a word and copies it.
 * @word: The word to copy.
 * @length: The length of the word.
 * 
 * Description: Helper function to allocate memory for a word and copy it.
 * 
 * Return: Pointer to the newly allocated word.
 */
char *allocate_and_copy_word(char *word, int length)
{
	char *new_word;
	int i;

	new_word = malloc((length + 1) * sizeof(char));
	if (!new_word)
		return (NULL);

	for (i = 0; i < length; i++)
		new_word[i] = word[i];

	new_word[i] = '\0';

	return new_word;
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 * 
 * Description: Splits a string into an array of words.
 * 
 * Return: NULL if the string is empty, NULL, or if the function fails.
 *         Otherwise, return a pointer to the array of words.
 */
char **strtow(char *str)
{
	int total_words = 0, b = 0, length = 0;
	char **words;

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
		words[b] = allocate_and_copy_word(str, length);

		if (words[b] == NULL)
		{
			free_everything(words, b);
			return (NULL);
		}

		b++;
		str += length;
	}

	return (words);
}
