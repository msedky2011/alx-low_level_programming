#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Success
*/


int main(void)
{
	int alph;

	for (alph = 0; alph <= 9; alph++)
	{
		putchar (alph + '0');
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar (alph);
	}
	putchar ('\n');
	return (0);
}
