#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 Success
*/


int main(void)
{
	int e;
	char str[] = "_putchar";
	
	for (e = 0; e <= 8; e++)
		_putchar (str[e]);
	_putchar ('\n');
	return (0);
}
