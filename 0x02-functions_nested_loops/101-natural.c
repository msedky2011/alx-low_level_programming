#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: void
 **/

void main(void)
{
	int sum;
	int i;

	sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		sum += i;
	}


	printf("%d", sum);


}
