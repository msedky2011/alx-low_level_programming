#include "main.h"

/**
* print_line - print times n to stdout
*@n: number of print
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
		_putchar('\n');
}
