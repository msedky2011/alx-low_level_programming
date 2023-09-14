#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings -Entry point
 *
 *@separator :string to be printed between numbers
 *@n:count_varadic input
 *
 *Return:nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_list;
	unsigned int i;
	char *sep, *check;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(print_list, n);
	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%s", va_arg(print_list, char *));
	for (i = 1; i < n; i++)
	{
		check = va_arg(print_list, char *);
		if (check == NULL)
			check = "(nil)";
		printf("%s%s", sep, check);
	}
	printf("\n");
	va_end(print_list);
}
