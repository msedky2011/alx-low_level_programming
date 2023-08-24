#include "main.h"

/**
 *leet-that concatenates two strings.
 *
 *@a:array
 *
 *Return: pointer to the resulting string
 */

char *rot13(char *a)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int rot[] =  "nopqrstuvwxyzabcefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

for (i = 0; a[i] != '\0'; i++)
{
	for (j = 0 ; j < 4; j++)
		if ((a[i] == alp[j]) || (a[i] == alp[j] + 32))
			a[i] = map[j] + 48;

}
return (a);
}
