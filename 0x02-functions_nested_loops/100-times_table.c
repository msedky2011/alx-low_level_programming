#include <stdio.h>
#include "main.h"
/**
 * print_times_table - entry point
 * @y: number
 **/

void print_times_table(int y)
{
	int i;
	int j;
	int x;

	if (y > 15 || y < 0)
	{
		return;
	}

	for (i = 0; i <= y; i++)
	{
		_putchar('0');

		for (j = 1; j <= y; j++)
		{

			_putchar(',');
			_putchar(' ');

			x = i * j;

			_putchar(x > 99 ? ((x / 100) + '0') : ' ');
			_putchar(x > 9 ? (((x / 10) % 10) + '0') : ' ');
			_putchar(x % 10 + '0');

		}
		_putchar('\n');
	}

}
