#include <stdio.h>
#include "main.h"

/**
* main - print FizzBuzz
* Return: 0 SUCCESS
*/

int main(void)
{
	int i;

	printf("%d", 1);

	for (i = 2; i <= 100; i++)
	{
		printf(" ");

		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}

	}

	printf("\n");

	return (0);
}
