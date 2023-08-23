#include "main.h"

/**
 *_strncpy-that concatenates two strings.
 *
 *@dest:string
 *
 *@src:string
 *
 *@n: bytes from src
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c1;

for (c1 = 0 ; c1 < n && src[c1] != '\0'; c1++)
	dest[c1] = src[c1];

while (c1 < n)
{
dest[c1] = '\0';
c1++;
}
return (dest);
}
