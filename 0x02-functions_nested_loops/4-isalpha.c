#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check alphabet in lower or upper case
 * @c:character want to check`
 * Return: 1 Success
 * return :0 failed
 **/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
