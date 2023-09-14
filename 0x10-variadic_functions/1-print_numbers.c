#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers -Entry point
 *
 *@separator :string to be printed between numbers
 *@n:count_varadic input
 *
 *Return:nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_list;
	unsigned int i;
	char *sep;

	if (separator == NULL || separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(print_list, n);
	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%d", va_arg(print_list, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%d", sep, va_arg(print_list, int));
	}
	printf("\n");
	va_end(print_list);
}
