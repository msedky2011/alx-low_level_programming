#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - matches operator from main
 * @s: op str
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_sign[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (op_sign[i].op)
	{
		if (*(op_sign[i].op) == *s)
			return (op_sign[i].f);
		i++;
	}
	return (NULL);
}
