#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * number - Calculate the number of words in a string
 * @str: The string to evaluate
 *
 * Return: The number of words in the string
 */
int number(char *str)
{
	int index = 0, word_count = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[index] != ' ' && str[index] != '\0'; index++)
				str++;
			word_count++;
		}
	}
	return (word_count);
}

/**
 * free_everything - Free allocated memory
 * @string_array: The array of strings to free
 * @count: The number of elements to free
 */
void free_everything(char **string_array, int count)
{
	for (; count > 0;)
		free(string_array[--count]);
	free(string_array);
}

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: A NULL-terminated array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	int total_words = number(str);
	int word_index = 0, char_index = 0, length = 0;
	char **words, *current_word;

	if (str == NULL || *str == 0 || total_words == 0)
		return (NULL);

	words = malloc((total_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (; *str != '\0' && word_index < total_words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			current_word = str;
			while (*str != ' ' && *str != '\0')
			{
				length++;
				str++;
			}
			words[word_index] = malloc((length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				free_everything(words, word_index);
				return (NULL);
			}
			for (char_index = 0; char_index < length; char_index++)
			{
				words[word_index][char_index] = *current_word;
				current_word++;
			}
			words[word_index][char_index] = '\0';
			word_index++;
			length = 0;
		}
	}
	words[word_index] = NULL;
	return (words);
}
