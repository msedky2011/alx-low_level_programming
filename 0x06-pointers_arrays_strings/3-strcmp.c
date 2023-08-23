#include "main.h"

/**
 *_strcmp-that concatenates two strings.
 *
 *@s1:string
 *
 *@s2:string
 *
 * Return: pointer to the resulting string
 */

int _strcmp(char *s1, char *s2)
{
	int i, cmp;

for (i = 0 ; s1[i] != '\0'; i++)
	if (s1[i] == s2[i])
		cmp = 0;
	else
	{
		cmp = (s1[i] - s2[i]);
		break;
	}
return (cmp);
}
