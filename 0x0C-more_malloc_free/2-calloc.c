#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes.
 * @nmemb: Number of elements.
 * @size: Size in bytes of elements.
 * Return: Pointer to new memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int ar_size, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar_size = nmemb * size;
	ar = malloc(ar_size);
	if (ar == NULL)
		return (NULL);

	while (i < ar_size)
	{
		ar[i] = 0;
		i++;
	}

	return (ar);
}
