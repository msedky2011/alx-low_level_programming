#include <stdio.h>
/**
 *
 *
 *
 *
 */
long largestPrimeFactor (long number)
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
	return number;
}

int main()
{
	long number = 612852475143;
	long largestFactor = largestPrimeFactor(number);
	
	printf("%ld\n", largestFactor);
	return 0;
}
