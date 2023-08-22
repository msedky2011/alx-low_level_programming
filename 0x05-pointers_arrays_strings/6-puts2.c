#include "main.h"

/**
 *puts2- function that returns the length of a string
 *
 * @str:char parameter
 *
 * Return:nothing
 *
 */
void puts2(char *str)
{
	for (; *str != '\0' ; str += 2)
	{
		_putchar(*str + 0);
		if (*str + 1 == '\0')
			break;
	}
	_putchar('\n');
}
