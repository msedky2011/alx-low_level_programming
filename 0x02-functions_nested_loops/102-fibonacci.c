#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0
 **/

int main(void)
{
	long sum;
	long i;
	long x;
	long y;

	x=1;
	y=1;

	sum = 0;
	printf("%d",2);
	y=2;

	for (i = 1; i < 50; i++)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf(", %ld", sum); 
	}
	
	printf("\n");

	return (0);

}
