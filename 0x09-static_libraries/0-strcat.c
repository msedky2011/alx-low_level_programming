#include "main.h"

/**
 *_strcat-that concatenates two strings.
 *
 *@dest:string
 *
 *@src:string
 *
 *Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;
for (c1 = 0 ; src[c1] ; c1++)
	dest[c++] = src[c1];
return (dest);
}
