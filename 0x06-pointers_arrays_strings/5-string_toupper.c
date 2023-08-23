#include "main.h"

/**
 *string_toupper- that concatenates two strings.
 *
 *@a: array
 *
 *
 * Return: char
 */


char *string_toupper(char *a)
{
	int j;

for (j = 0 ; a[j] != '\0'; j++)
{
	if (a[j] >= 97 && a[j] <= 122)
		a[j] = a[j] - 32;
}
return (a);
}
