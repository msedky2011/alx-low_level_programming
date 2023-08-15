#include <stdio.h>
#include "main.h"
/**
 * times_table - entry point
 * Return: 0
 **/

void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 0; j <= 9; j++)
		{

			_putchar(',');
			_putchar(' ');

			x = i * j;

			_putchar(x > 9 ? ((x / 10) + '0') : ' ');
			_putchar(x % 10 + '0');

		}
		_putchar('\n');
	}

}
