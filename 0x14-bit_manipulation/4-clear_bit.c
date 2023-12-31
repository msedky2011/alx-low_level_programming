#include "main.h"

/**
 * clear_bit - clear the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;

	if (index > 63)
	{
		return (-1);
	}
	temp = 1 << index;
	if (*n & temp)
		*n = *n ^ temp;

	return (1);

}
