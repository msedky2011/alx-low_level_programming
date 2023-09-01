#include <stdio.h>
#include "main.h"
/**
 *_abs - check number positive or negative and return abs
 *@n:character want to check
 *Return:abs of n
 **/
int _abs(int n)
{
	if (n < 0)
	n = (-1) * n;
	return (n);
}
