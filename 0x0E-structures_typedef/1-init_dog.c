#include <stdio.h>
#include "dog.h"

/**
 *init_dog -fuction intial struct dog
 *@d: adog structure
 *@name:name of the dog
 *@age:age of the dog
 *@owner: owner of the dog
 *
 * return:nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}