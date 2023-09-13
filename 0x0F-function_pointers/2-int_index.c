#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index-function search for int
 *
 *@array :input array
 *@size :size of input array
 *@cmp :function pointer
 *
 *Return:int if success
 *	:-1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
