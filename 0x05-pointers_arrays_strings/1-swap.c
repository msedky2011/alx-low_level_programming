#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 *
 *@a:int paramter
 *@b:int paramter
 *
 * Return : Nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
