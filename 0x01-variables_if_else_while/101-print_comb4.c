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
	int x, y;

	for (alph = 0; alph <= 8; alph++)
	{
		for (x = alph + 1 ; x <= 9; x++)
		{
			for (y = x + 1; y <= 9; y++)
			{
				putchar (alph + '0');
				putchar (x + '0');
				putchar (y + '0');
				if (!(alph == 8 && x == 9))
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
