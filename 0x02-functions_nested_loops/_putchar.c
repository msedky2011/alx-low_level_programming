#include<unistd.h>
#include "main.h"
/*
 *_putchar _write character
 *description : defintion function _putchar print character on stdout
 *@c:charater to print
 *return: 1 if success
 */
/*
 *description: for function _putchar used to print char
 *return: if success return 1
 *error return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
