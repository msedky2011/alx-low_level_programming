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
	
	int i;
	char pass[14];
	
	srand(time(NULL));
	for (i = 0; i < 14 ; i++)
		pass[i] = ('!' + (rand() % 95));
	pass[14] = '\0';
	printf ("%s \n", pass);


    return (0);
}
