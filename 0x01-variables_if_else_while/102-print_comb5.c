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
	int x, y, z;

	for (alph = 0; alph <= 9; alph++)
	{
		for (x = alph  ; x <= 8; x++)
		{
			for (y = x ; y <= 9; y++)
			{
				for (z = y + 1 ; z <= 9; z++)
				{
				putchar (alph + '0');
				putchar (x + '0');
				putchar (' ');
				putchar (y + '0');
				putchar (z + '0');
				if (!(alph == 9 && x == 8 && y == 9 && z == 9))
				{
					putchar (',');
					putchar (' ');
				}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
