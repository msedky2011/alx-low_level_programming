#include "main.h"
/**
 *_memset -fill memory with constant b
 *
 *@s:sting
 *
 *@b:constant
 *
 *@n:number of byte
 *
 *Return:string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
