#include "main.h"
#include <stdio.h>

/**
 *print_array- function prints n element of array
 *
 * @a:int parameter
 * @n:int parameter
 *
 * Return:nothing
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
	if (i != (n - 1))
	printf("%d, ", a[i]);
	else
		printf("%d", a[i]);
}
	printf("\n");
}
