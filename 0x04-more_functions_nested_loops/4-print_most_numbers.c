#include "main.h"
/**
*print_most_numbers- _print digit from 0 to 9
*_putchar-used to print on stdout
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if ((i != 52) && (i != 50))
		_putchar(i);
		else
			continue;
	}
	_putchar('\n');

}
