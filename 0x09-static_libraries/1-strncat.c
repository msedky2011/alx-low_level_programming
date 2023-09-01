#include "main.h"

/**
 *_strncat-that concatenates two strings.
 *
 *@dest:string
 *
 *@src:string
 *
 *@n: bytes from src
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;

for (c1 = 0 ; c1 < n && src[c1] != '\0'; c1++)
	dest[c++] = src[c1];
dest[c] = '\0';
return (dest);
}
