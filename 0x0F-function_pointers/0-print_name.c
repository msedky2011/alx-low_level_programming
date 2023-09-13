#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name -function print name
 *
 *@name :input name
 *
 *@f : input pointer function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	f(name);
}
