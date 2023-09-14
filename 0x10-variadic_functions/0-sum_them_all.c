#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all-Entry point
 *
 *@n:count_varadic input
 *
 *Return:Sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list_sum;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(list_sum, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list_sum, int);
	}
	va_end(list_sum);
	return (sum);
}
