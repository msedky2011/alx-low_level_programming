#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i, j;

	j = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(j);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
