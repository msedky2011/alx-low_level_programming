#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *              if NULL is passed, treat it as an empty string
 *              The function should return NULL on failure
 *
 * @s1: This is the output string
 * @s2: This is the input string
 *
 * Return: The returned pointer should point to a newly allocated space in
 *	memory which contains the contents of s1, followed by the contents
 *         of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *con;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	con = malloc((i + j + 1) * sizeof(char));
	if (con == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		con[i] = s2[j];
		i++;
	}
	return (con);
}
