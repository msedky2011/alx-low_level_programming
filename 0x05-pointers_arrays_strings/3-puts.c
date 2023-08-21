#include "main.h"

/**
 *_puts- function that returns the length of a string
 *
 * @str:char parameter
 *
 * Return:nothing
 *
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	_putchar(*str + 0);
	_putchar('\n');
}
