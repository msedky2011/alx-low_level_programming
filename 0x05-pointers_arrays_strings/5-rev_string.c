#include "main.h"
#include <string.h>

/**
 *rev_string- prints a string, in reverse
 *
 * @s:char parameter
 *
 * Return:nothing
 *
 */
void rev_string(char *s)
{
	int i,j;
	char k;

	i = 0;

	if (s[i] != '\0')
	{
	while (s[i + 1] != '\0')
		i++;
	for (j = 0; j <= i / 2; j++)
	{
		k = s[i - j];
		s[i - j] = s[j];
		s[j] = k;
	}
	}
}
