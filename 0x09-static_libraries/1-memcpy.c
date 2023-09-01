#include "main.h"
/**
 *_memcpy -copy n memory from string src to string dest
 *
 *@src:string
 *
 *@dest:string
 *
 *@n:number of byte
 *
 *Return:string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
