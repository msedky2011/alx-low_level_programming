#include <stdio.h>
#include "main.h"
/**
 *print_sign - check number positive or negative
 *@n:character want to check
 *Return: 1 if positive
 *return:0 if zero
 *	: -1 if negative
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
