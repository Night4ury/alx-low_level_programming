#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Function Title
 *
 * Description: Loading...
 *
 * @d: paramter
 * @name: paramter
 * @age: paramter
 * @owner: paramter
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
