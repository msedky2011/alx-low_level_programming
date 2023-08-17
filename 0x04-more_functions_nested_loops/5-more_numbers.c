#include "main.h"
/**
*more_numbers- _print digit from 0 to 14 ten times
*_putchar-used to print on stdout
*/

void more_numbers(void)
{
	int i, j, z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			z = j;
			if (z > 9)
			{
				_putchar(49);
				z = j % 10;
			}
			_putchar(z + 48);
		}
		_putchar('\n');
	}
}
