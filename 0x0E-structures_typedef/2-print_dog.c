#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function Title
 *
 * Description: Loading...
 *
 * @d: paramter
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		printf("Owner%s\n", d->owner);
	}

}
