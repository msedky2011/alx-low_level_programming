#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry Point
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, k = 0;
	char *st, *sp = ", ";

	va_start(list, format);

	while (format && format[i])
		i++;
	while (format && format[i])
	{
		if (k == (i - 1))
			sp = "";
		switch (format[k])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), sp);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), sp);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), sp);
				break;
			case 's':
				st = va_arg(list, char *);
				if (st == NULL)
					st = "(nil)";
				printf("%s%s", st, sp);
				break;
		}
		k++;
	}
	printf("\n");
	va_end(list);

}
