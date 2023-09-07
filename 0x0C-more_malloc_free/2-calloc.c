#include "main.h" /* or #include <stdio.h>, <stdlib.h>, etc., depending on your setup */
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    char *ptr;

    /* If nmemb or size is 0, return NULL */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Allocate memory */
    ptr = malloc(nmemb * size);
    
    /* Check for malloc failure */
    if (ptr == NULL)
        return (NULL);

    /* Initialize the memory to zero */
    for (i = 0; i < (nmemb * size); i++)
        ptr[i] = 0;

    return (ptr);
}
