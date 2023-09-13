#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *array_iterator-function that executes a function given as a parametr
 *       on each element of an array.
 *
 *@array: input array
 *@size:size of input array
 *@action:input function
 *
 *return:nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
