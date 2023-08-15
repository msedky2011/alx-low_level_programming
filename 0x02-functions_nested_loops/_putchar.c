#include<unistd.h>
#include "main.h"

/**
 *  initial main - Entry point
 *_putchar _write the character c to stdout function write character
 *@c:charater to print
 *
 * Return:on successn 1
 *	on error, -1 returned
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
