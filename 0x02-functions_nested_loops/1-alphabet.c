#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - put alphabet in lower case
 * Return: 0 Success
 **/
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
