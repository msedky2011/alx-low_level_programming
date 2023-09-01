#include <stdio.h>
#include "main.h"
/**
 * _islower - check alphabet in lower case 10 times
 * @c:character want to check`
 * Return: 1 Success
 * return :0 failed
 **/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
