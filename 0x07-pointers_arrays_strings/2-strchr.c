#include "main.h"
/**
 *_strchr -find c char in string s
 *
 *@s:string
 *
 *
 *@c:char
 *
 *Return:loction of char if find
 *else return :null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	if (s[i] == c)
		return (i + s);
	return ('\0');
}
