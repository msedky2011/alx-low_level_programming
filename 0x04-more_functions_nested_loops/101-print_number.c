#include <stdio.h>
#include "main.h"
/**
* print_number-_ print number on stdout
* @n:input number
*/

void print_number(int n)
{
	int divisor;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;

		while (n / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		int digit = n / divisor;
			_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
