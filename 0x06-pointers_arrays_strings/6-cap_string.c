#include "main.h"
#include <stdio.h>

/**
 *cap_string- that concatenates two strings.
 *
 *@a: array
 *
 *
 * Return: char
 */

char *cap_string(char *a)
{
	int i, j, d;
	char del[] = {' ', '\n', '.', ',', '(', ')', '{', '}', ';', '!', '?', '\t'};

	d = 1;
for (j = 0 ; a[j] != '\0'; j++)
{
	if ((a[j] >= 97 && a[j] <= 122) && (d == 1))
	{
		a[j] = a[j] - 32;
		d = 0;
	}
	else
		d = 0;
for (i = 0; i <= 12; i++)
{
	if (a[j] == del[i])
		d = 1;
}

}
return (a);
}
