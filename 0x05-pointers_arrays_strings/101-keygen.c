#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	srand(time(NULL));
	int i;
	char pass[9];
	
	for (i = 0; i < 8 ; i++)
		pass[i] = ('!' + (rand() % 95));
	printf ("%s \n", pass);


    return (0);
}
