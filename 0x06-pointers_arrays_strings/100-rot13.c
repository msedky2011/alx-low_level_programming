#include "main.h"

/**
 *rot13-that mapping letters.
 *
 *@a:array
 *
 *Return: pointer to the resulting string
 */

char *rot13(char *a)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] =  "nopqrstuvwxyzabdcefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

for (i = 0; a[i] != '\0'; i++)
{
	for (j = 0 ; j <= 52; j++)
		if (a[i] == alp[j])
			a[i] = rot[j];

}
return (a);
}
