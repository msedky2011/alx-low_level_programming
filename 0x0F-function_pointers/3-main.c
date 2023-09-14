#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - entiry point
 *
 *@argc :input count
 *@argv :input argument
 *
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*op_fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	op_fptr = get_op_func(argv[2]);
	if (op_fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", op_fptr(a, b));
	return (0);
}
