#include <stdio.h>

/**
* largestPrimeFactor- _print largestPrimeFactor
*@number:number input
*Return: value of 'largestPrimeFactor :largestPrimeFactor_number
*/

long largestPrimeFactor(long number)
{
	long i = 2;

	while (i * i <= number)
	{
		if (number % i == 0)
		{
			number /= i;
		}
		else
		{
			i++;
		}
	}
	return (number);
}

/**
* main - entry point
* Return: 0
*
*/

int main(void)
{
	long number = 612852475143;
	long largestFactor = largestPrimeFactor(number);

	printf("%ld\n", largestFactor);
	return (0);
}
