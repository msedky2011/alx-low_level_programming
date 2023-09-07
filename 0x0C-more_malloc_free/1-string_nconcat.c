#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, l1, l2, fn = n;
	char *sptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	if (fn >= l2)
		fn = l2;
	sptr = malloc(sizeof(char) * (l1 + fn + 1));
	if (sptr == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		sptr[i] = s1[i];
	}
	for (j = 0; j < fn; j++)
	{
		sptr[i++] = s2[j];
	}
	sptr[i++] = '\0';
	return (sptr);
}
