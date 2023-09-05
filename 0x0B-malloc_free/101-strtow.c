#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * number - Count the number of words in a string.
 * @str: The string to count words in.
 * Return: The number of words.
 */
int number(const char *str)
{
	int a, num = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == ' ')
			continue;
		for (; str[a] != ' ' && str[a] != '\0'; a++)
			;
		num++;
	}
	return (num);
}

/**
 * free_everything - Free a 2D array of strings.
 * @string: The array to free.
 * @i: The index to free up to.
 */
void free_everything(char **string, int i)
{
	for (; i >= 0; i--)
		free(string[i]);
	free(string);
}

/**
 * find_next_word - Find the next word in a string.
 * @str: The string to search.
 * @length: A pointer to store the length of the word.
 * Return: A pointer to the start of the next word.
 */
const char *find_next_word(const char *str, int *length)
{
	*length = 0;
	while (*str == ' ')
		str++;
	while (str[*length] != ' ' && str[*length] != '\0')
		(*length)++;
	return (str);
}

/**
 * allocate_and_copy_word - Allocate and copy a word.
 * @word: The word to copy.
 * @length: The length of the word.
 * Return: A pointer to the new word, or NULL on failure.
 */
char *allocate_and_copy_word(const char *word, int length)
{
	char *new_word;
	int i;

	new_word = malloc((length + 1) * sizeof(char));
	if (!new_word)
		return (NULL);
	for (i = 0; i < length; i++)
		new_word[i] = word[i];
	new_word[i] = '\0';
	return (new_word);
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 * Return: A 2D array of the words, or NULL on failure.
 */
char **strtow(char *str)
{
	int total_words, b = 0, length = 0;
	char **words;

	if (!str || !*str)
		return (NULL);
	total_words = number(str);
	if (total_words == 0)
		return (NULL);
	words = malloc((total_words + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	for (; *str && b < total_words;)
	{
		str = (char *)find_next_word(str, &length);
		words[b] = allocate_and_copy_word(str, length);
		if (!words[b])
		{
			free_everything(words, b);
			return (NULL);
		}
		b++, str += length;
	}
	words[b] = NULL;
	return (words);
}
