#include "main.h"

/**
* print_triangle - print times n to stdout
*@n: number of print
*/

void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
				_putchar(' ');
			for (j = n - 1 - i; j < n ; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
