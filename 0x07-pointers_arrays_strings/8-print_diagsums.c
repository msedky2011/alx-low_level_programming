#include "main.h"
#include <stdio.h>

/**
 *print_diagsums-add items
 *
 *@a:array
 *
 *@size:size
 *
 *
 *
 *Return:nothing
 */
void print_diagsums(int *a, int size)
{
	 int i, sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	sum1 += a[i];
	sum2 += a[size - i - 1];
	a += size;
	printf("%d, ", sum1);
	printf("%d,\n ", sum2);
}
