#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - entry poin
 *@n: The number
 *Return: The last digit
 **/

int print_last_digit(int n)
{
	int lsd;

	if (n >= 0)
		lsd = (n % 10);
	else
		lsd = (-n % 10);
	_putchar(lsd + '0');
	return (lsd);
}
