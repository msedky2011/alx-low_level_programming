#include "main.h"
#include <string.h>

/**
 *print_rev- prints a string, in reverse
 *
 * @s:char parameter
 *
 * Return:nothing
 *
 */
void print_rev(char *s)
{
	int i;

	while (s[i])
	i++;
	while (i--)
		_putchar(s[i] + 0);
	_putchar('\n');
}
