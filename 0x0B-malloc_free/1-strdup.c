#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *           memory, which contains a copy of the string given as a parameter.
 *
 * @str: This is the input string
 *
 * Return: function returns a pointer to the duplicated string. It returns
 *         NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, j;
	char *dup;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
	;
dup = malloc((i + 1) * sizeof(char));
if (dup == NULL)
	return (NULL);
else
{
for (j = 0; j < i; j++)
dup[j] = str[j];
dup[i + 1] = '\0';
return (dup);
}
}
