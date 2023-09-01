#include "main.h"

/**
 * _isupper - _check if c upper or not
 * @c: input alphabet
 * Return: 1 if upper else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
