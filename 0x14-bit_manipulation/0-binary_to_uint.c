#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uni_int = 0, base_2 = 1;
	int length;

	if (b == NULL)
		return (0);
	for (length = 0 ; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
		return (0);
	}
	length--;
	while (length >= 0)
	{
		if (b[length] & 1)
		uni_int += base_2;
		base_2 *= 2;
		length--;
	}
	return (uni_int);
}
