#include "main.h"

/**
 *reverse_array- that concatenates two strings.
 *
 *@a: array
 *
 *@n:array lenght
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int t, j;

for (j = 0 ; j < n  / 2; j++)
{
	t = a[n - 1 - j];
	a[n - 1 - j] = a[j];
	a[j] = t;
}
}
