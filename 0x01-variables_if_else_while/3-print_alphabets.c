#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Success
*/


int main(void)
{
	char alph, alph_c;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar (alph);
	}
	for (alph_c = 'A'; alph_c <= 'Z'; alph_c++)
	{
		putchar (alph_c);
	}
	putchar ('\n');
	return (0);
}
