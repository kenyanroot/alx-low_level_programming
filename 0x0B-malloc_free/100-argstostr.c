#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: Array of pointers to the arguments.
 * Return: Pointer to the new string, or NULL if failure.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			count++;
	}
	count += ac + 1;

	str = malloc(count * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, c++)
			str[c] = av[a][b];
		str[c++] = '\n';
	}
	str[c] = '\0';
	return (str);
}
